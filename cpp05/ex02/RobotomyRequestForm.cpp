/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:36:51 by bperron           #+#    #+#             */
/*   Updated: 2022/11/09 13:03:37 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("some random target"){
	cout << "RobotomyRequestForm default constructor called" << endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(string targ) : AForm("RobotomyRequestForm", 72, 45), target(targ){
	cout << "RobotomyRequestForm constructor called" << endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &init) : AForm("RobotomyRequestForm", 72, 45){
	target = init.target;
	this->setStatus(init.getStatus());
	cout << "RobotomyRequestForm copy constructor called" << endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	cout << "RobotomyRequestForm destructor called" << endl;
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src){
	if (this != &src){
		target = src.target;
		this->setStatus(src.getStatus());
	}
	cout << "RobotomyRequestForm copy assignement operator called" << endl;
	return (*this);
}

int	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (getStatus() == true){
		try
		{
			if (executor.getGrade() > getExe())
				throw GradeTooLowException();
			robotomy(target);
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return 1;
		}
	}
	else 
		cout << executor.getName() << " couldn't execute the form because it wasn't signed" << endl;
	return 0;
}

void	RobotomyRequestForm::robotomy(string target) const{
	srand(time(0));
	cout << "Unbearable drilling noise" << endl;
	if ((rand() % 2 + 1) % 2 == 0)
		cout << "The robotomy of " << target << " has been a succes" << endl;
	else
		cout << "The robotomy of " << target << " has been a failure" << endl;
	return;
}