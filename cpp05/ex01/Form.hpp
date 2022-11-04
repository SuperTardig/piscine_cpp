/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:57:18 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 10:08:33 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form{
private:
	const string	name;
	const int		sign;
	const int		exe;
	bool			status;
	void			signForm(Bureaucrat &dude) const;
public:
	Form();
	Form(string n, int s, int e);
	Form(const Form &init);
	~Form();
	Form &operator=(const Form &src);

	string	getName() const;
	int		getSign() const;
	int		getExe() const;
	bool	getStatus() const;
	void	beSigned(Bureaucrat &dude);
	void	setStatus();

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

std::ostream &operator<<(std::ostream &os, const Form &form);
