/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:57:18 by bperron           #+#    #+#             */
/*   Updated: 2023/03/30 08:46:36 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
private:
	const string	name;
	const int		sign;
	const int		exe;
	bool			status;
public:
	AForm();
	AForm(string n, int s, int e);
	AForm(const AForm &init);
	~AForm();
	AForm &operator=(const AForm &src);

	string	getName() const;
	int		getSign() const;
	int		getExe() const;
	bool	getStatus() const;
	void	beSigned(Bureaucrat &dude);
	void	setStatus(bool stat);
	virtual int execute(Bureaucrat const &executor) const = 0;

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

std::ostream &operator<<(std::ostream &os, const AForm &form);
