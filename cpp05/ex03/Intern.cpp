/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:42:56 by bperron           #+#    #+#             */
/*   Updated: 2022/11/07 10:31:52 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	cout << "Intern default constructor called" << endl;
	return;
}

Intern::Intern(Intern const &init){
	(void) init;
	cout << "Intern copy constructor called" << endl;
	return;
}

Intern::~Intern(){
	cout << "Intern destructor called" << endl;
	return;
}

Intern &Intern::operator=(Intern const &src){
	(void) src;
	return (*this);
}

AForm *Intern::makeForm(string name, string target){
	string hold[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = -1;
	AForm *form;
	
	while (++i < 3)
	{
		if (name == hold[i])
			break;
	}
	switch (i)
	{
	case 0:
		form = new ShrubberyCreationForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new PresidentialPardonForm(target);
		break;
	default:
		cout << "The form that the intern tried to create doesn't exist" << endl;
		break;
	}
	return form;
}