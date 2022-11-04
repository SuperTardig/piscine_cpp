/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:51:57 by bperron           #+#    #+#             */
/*   Updated: 2022/11/03 10:49:46 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat{
private:
	int					grade;
	const std::string	name;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &init);
	Bureaucrat(int i, std::string n);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &src);
	
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

	std::string	getName() const;
	int			getGrade() const;
	void				gradeUp();
	void				gradeDown();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &dude);
