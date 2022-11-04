/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:32:42 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 13:26:57 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("some random target"){
	cout << "ShrubberyCreationForm default constructor called" << endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(string targ) : AForm("ShrubberyCreationForm", 145, 137), target(targ){
	cout << "ShrubberyCreationForm constructor called" << endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &init) : AForm("ShrubberyCreationForm", 145, 137){
	target = init.target;
	this->setStatus(init.getStatus());
	cout << "ShrubberyCreationForm copy constructor called" << endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	cout << "ShrubberyCreationForm destructor called" << endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src){
	if (this != &src){
		target = src.target;
		this->setStatus(src.getStatus());
	}
	cout << "ShrubberyCreationForm copy assignement operator called" << endl;
	return (*this);
}

int	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (getStatus() == true){
		try
		{
			if (executor.getGrade() > getExe())
				throw GradeTooLowException();
			ascii(target);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			return 1;
		}
	}
	return 0;
}

void	ShrubberyCreationForm::ascii(string target) const{
	srand(time(0));
	std::ofstream file(target.append("_shrubbery"), std::ios_base::trunc);
	file << "                                ▒▒▒▒      ▒▒░░                         \n                      ▓▓      ▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░░░░░░░                     \n                    ░░▓▓░░    ▓▓▓▓▓▓▒▒▒▒▒▒░░░░░░░░▒▒▒▒    ░░░░            \n            ▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░            \n            ▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░▒▒░░░░░░░░          \n          ██▓▓▓▓▒▒▒▒▒▒░░░░▒▒▒▒▓▓▓▓▒▒░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░          \n        ░░▓▓▓▓▒▒▒▒▒▒░░░░░░▒▒▒▒▒▒▓▓▒▒░░░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░      \n      ▓▓▓▓▓▓▒▒▒▒░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒    \n      ▓▓▓▓▓▓▒▒░░░░▒▒░░░░░░▒▒▒▒░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  \n    ██▓▓▓▓▓▓▒▒▒▒▒▒▒▒░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░▒▒  \n    ▓▓▓▓▓▓▒▒▒▒░░▒▒░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░  \n  ▓▓▓▓▓▓▓▓▒▒▒▒▒▒░░░░▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░    \n  ▓▓▓▓▓▓▒▒▒▒░░▒▒▒▒░░▒▒░░░░░░░░▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░  \n  ▓▓▓▓▓▓▒▒░░░░▒▒░░░░░░▒▒▒▒░░░░▒▒▒▒▒▒▒▒░░░░░░▒▒░░░░░░▒▒░░░░░░░░░░░░░░░░░░░░\n  ▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▓▓▒▒░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░▒▒░░░░\n▒▒▓▓▓▓▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░▒▒░░░░▒▒░░▒▒▒▒  \n▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░▒▒▒▒░░░░▒▒▒▒▒▒    \n▓▓▓▓▓▓▒▒▓▓▓▓▒▒▒▒▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▓▓▓▓▒▒▒▒░░▒▒▒▒▒▒░░░░░░▒▒▒▒░░░░░░▒▒▒▒      \n▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▒▒▒▒░░░░▒▒▒▒░░░░░░▒▒▒▒░░░░▒▒▒▒▒▒      \n  ▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒    \n    ▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒░░░░▒▒▒▒░░░░▒▒▒▒  \n  ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▓▓▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  \n  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒    \n      ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▒▒▓▓▒▒▓▓▒▒▒▒▓▓    \n      ▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▒▒▒▒▓▓▓▓  \n    ██▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▓▓▒▒▒▒▒▒▓▓▓▓▓▓▒▒▓▓▒▒▓▓▓▓▓▓  \n    ▓▓▓▓▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓  \n    ▓▓▓▓  ▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    \n          ▓▓▓▓▓▓▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓      \n          ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    ▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓              \n          ▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    ▓▓▓▓▓▓▓▓▓▓                      \n                  ▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓      ██▓▓▓▓▓▓▓▓                        \n                          ▓▓▓▓▓▓▒▒    ░░▓▓▓▓▓▓▓▓                          \n                          ▓▓▓▓▓▓▒▒▒▒▓▓▓▓▓▓▓▓▓▓                            \n                            ▓▓▓▓▓▓▒▒▓▓▓▓▓▓▓▓▓▓                            \n                              ▓▓▓▓▓▓▓▓▓▓▓▓▓▓                              \n                              ▒▒▓▓▓▓▓▓▓▓▓▓▓▓                              \n                                ▓▓▓▓▓▓▓▓▓▓▒▒                              \n                                ▓▓▓▓▓▓▓▓▓▓▒▒                              \n                                ▓▓▓▓▓▓▓▓▓▓▒▒                              \n                                ▓▓▓▓▓▓▓▓▓▓▒▒                              \n                                ▓▓▓▓▓▓▓▓▓▓▓▓▒▒                            \n                              ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒                          \n                            ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒                        \n                          ██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓                        \n                          ░░░░▓▓▓▓▓▓░░░░▓▓▓▓▓▓▓▓░░ ";
}