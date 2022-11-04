/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:51:57 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 08:46:53 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
using std::cout;
using std::string;
using std::endl;

class Bureaucrat{
private:
	int				grade;
	const string	name;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &init);
	Bureaucrat(int i, string n);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &src);

	string	getName() const;
	int		getGrade() const;
	void	gradeUp();
	void	gradeDown();

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &dude);
