/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:51:44 by bperron           #+#    #+#             */
/*   Updated: 2023/03/30 08:59:09 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	Bureaucrat	senior(5, "senior");
	Bureaucrat	junior(70, "junior");
	Intern		intern;
	AForm		*form1 = NULL;
	AForm		*form2 = NULL;
	AForm		*form3 = NULL;
	AForm		*form4 = NULL;
	AForm		*form5 = NULL;
	AForm		*form6 = NULL;

	form1 = intern.makeForm("shrubbery creation", "home");
	form2 = intern.makeForm("shrubbery creation", "office");
	form3 = intern.makeForm("robotomy request", "john");
	form4 = intern.makeForm("robotomy request", "bob");
	form5 = intern.makeForm("presidential pardon", "pablo escobar");
	form6 = intern.makeForm("presidential pardon", "joe exotic");
	cout << endl << "test 1" << endl;
	try
	{
		form1->beSigned(senior);
		senior.executeForm(*form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 2" << endl;
	try
	{
		form2->beSigned(junior);
		junior.executeForm(*form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 3" << endl;
	try
	{
		form3->beSigned(senior);
		senior.executeForm(*form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 4" << endl;
	try
	{
		form4->beSigned(junior);
		junior.executeForm(*form4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 5" << endl;
	try
	{
		form5->beSigned(senior);
		senior.executeForm(*form5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl << "test 6" << endl;
	try
	{
		form6->beSigned(junior);
		junior.executeForm(*form6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	cout << endl << endl;
	delete form1;
	delete form2;
	delete form3;
	delete form4;
	delete form5;
	delete form6;
	return 0;
}