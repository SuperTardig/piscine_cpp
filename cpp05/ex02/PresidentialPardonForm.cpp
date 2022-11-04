/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:37:27 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 13:26:53 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("some random target"){
	cout << "PresidentialPardonForm default constructor called" << endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(string targ) : AForm("PresidentialPardonForm", 25, 5), target(targ){
	cout << "PresidentialPardonForm constructor called" << endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &init) : AForm("PresidentialPardonForm", 25, 5){
	target = init.target;
	this->setStatus(init.getStatus());
	cout << "PresidentialPardonForm copy constructor called" << endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	cout << "PresidentialPardonForm destructor called" << endl;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src){
	if (this != &src){
		target = src.target;
		this->setStatus(src.getStatus());
	}
	cout << "PresidentialPardonForm copy assignement operator called" << endl;
	return (*this);
}

int	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (getStatus() == true){
		try
		{
			if (executor.getGrade() > getExe())
				throw GradeTooLowException();
			cout << target << " has been pardoned by President Zaphod Beeblebrox" << endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return 1;
		}
	}
	return 0;
}