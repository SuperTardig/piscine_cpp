/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:51:57 by bperron           #+#    #+#             */
/*   Updated: 2023/03/30 08:55:19 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using std::cout;
using std::string;
using std::endl;

#include "AForm.hpp"

class AForm;

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
	void	signForm(AForm &form) const;
	void	executeForm(AForm const &form);

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
