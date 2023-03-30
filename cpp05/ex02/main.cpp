/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:51:44 by bperron           #+#    #+#             */
/*   Updated: 2023/03/30 08:48:22 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	Bureaucrat	senior(5, "senior");
	Bureaucrat junior(70, "junior");

	ShrubberyCreationForm form1("home");
	ShrubberyCreationForm form2("home2");
	RobotomyRequestForm	form3("john");
	RobotomyRequestForm	form4("bob");
	PresidentialPardonForm form5("pablo escobar");
	PresidentialPardonForm	form6("joe exotic");
	cout << endl << endl << "test 1" << endl;
	try
	{
		form1.beSigned(senior);
		senior.signForm(form1);
		senior.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 2" << endl;
	try
	{
		form2.beSigned(junior);
		junior.signForm(form2);
		junior.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 3" << endl;
	try
	{
		form3.beSigned(senior);
		senior.signForm(form3);
		senior.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 4" << endl;
	try
	{
		form4.beSigned(junior);
		junior.signForm(form4);
		junior.executeForm(form4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 5" << endl;
	try
	{
		form5.beSigned(senior);
		senior.signForm(form5);
		senior.executeForm(form5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 6" << endl;
	try
	{
		form6.beSigned(junior);
		junior.signForm(form6);
		junior.executeForm(form6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl;
	return 0;
}