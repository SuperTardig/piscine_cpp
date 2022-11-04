/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:57:29 by bperron           #+#    #+#             */
/*   Updatd: 2022/11/04 09:43:25 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


const char *Form::GradeTooHighException::what() const throw(){
	return ("GradeTooHigh");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("GradeTooLow");
}

Form::Form() : name("some random form"), status(false), sign(75), exe(50){
	cout << "Form default constructor called" << endl;
	return;
}

Form::Form(string n, int  s, int e) : name(n), status(false), sign(s), exe(e){
	if (s < 1 || e < 1)
		throw GradeTooHighException();
	else if (s > 150 || e > 150)
		throw GradeTooLowException();
	cout << "Form constructor called" << endl;
	return;
}

Form::Form(const Form &init) : name(init.name), exe(init.exe), sign(init.sign), status(init.status){
	cout << "Form copy constructor called" << endl;
}

Form::~Form(){
	cout << "Form destructor called" << endl;
	return;
}

std::ostream &operator<<(std::ostream &os, const Form &form){
	os << "The form name is " << form.getName() << ". The grade required to sign it is " << form.getSign() << " and the one to execute it is " << form.getExe() << ". The form status is " << form.getStatus();
	return os;
}

Form &Form::operator=(const Form &src){
	if (this != &src)
		this->status = src.status;
	cout << "Form copy assignement operator called" << endl;
	return *this;
}

string	Form::getName() const{
	return this->name;
}

int		Form::getSign() const{
	return this->sign;
}

int		Form::getExe() const{
	return this->exe;
}

bool	Form::getStatus() const{
	return this->status;
}

void	Form::setStatus(){
	status = true;
	return;
}

void	Form::beSigned(Bureaucrat &dude){
	if (dude.getGrade() > this->sign){
		signForm(dude);
		throw GradeTooLowException();
	}
	setStatus();
	signForm(dude);
	return;
}

void	Form::signForm(Bureaucrat &dude) const{
	if (getStatus() == true)
		cout << dude.getName() << " signed " << getName() << endl;
	else
		cout << dude.getName() << " couldn't sign " << getName() << " because his grade is " << dude.getGrade() << " and the grade required to sign is " << getSign() << endl;
	return;
}