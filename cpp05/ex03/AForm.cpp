/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:57:29 by bperron           #+#    #+#             */
/*   Updatd: 2022/11/04 09:43:25 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw(){
	return ("GradeTooHigh");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("GradeTooLow");
}

AForm::AForm() : name("some random form"), status(false), sign(75), exe(50){
	cout << "AForm default constructor called" << endl;
	return;
}

AForm::AForm(string n, int  s, int e) : name(n), status(false), sign(s), exe(e){
	if (s < 1 || e < 1)
		throw GradeTooHighException();
	else if (s > 150 || e > 150)
		throw GradeTooLowException();
	cout << "AForm constructor called" << endl;
	return;
}

AForm::AForm(const AForm &init) : name(init.name), exe(init.exe), sign(init.sign), status(init.status){
	cout << "AForm copy constructor called" << endl;
}

AForm::~AForm(){
	cout << "AForm destructor called" << endl;
	return;
}

std::ostream &operator<<(std::ostream &os, const AForm &form){
	os << "The form name is " << form.getName() << ". The grade required to sign it is " << form.getSign() << " and the one to execute it is " << form.getExe() << ". The form status is " << form.getStatus();
	return os;
}

AForm &AForm::operator=(const AForm &src){
	if (this != &src)
		this->status = src.status;
	cout << "AForm copy assignement operator called" << endl;
	return *this;
}

string	AForm::getName() const{
	return this->name;
}

int		AForm::getSign() const{
	return this->sign;
}

int		AForm::getExe() const{
	return this->exe;
}

bool	AForm::getStatus() const{
	return this->status;
}

void	AForm::setStatus(bool stat){
	status = stat;
	return;
}

void	AForm::beSigned(Bureaucrat &dude){
	if (dude.getGrade() > this->sign)
		throw GradeTooLowException();
	setStatus(true);
	return;
}
