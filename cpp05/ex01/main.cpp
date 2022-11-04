/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:51:44 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 10:18:02 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	Bureaucrat junior(120, "junior");
	Bureaucrat	senior(5, "senior");
	Form		high("high", 15, 5);
	Form		def;
	Form		low("low", 125, 145);
	Form		high2("high", 15, 5);
	Form		def2;
	Form		low2("low", 125, 145);
	std::cout << std::endl;
	std::cout << junior << std::endl << senior << std::endl;
	std::cout << low << std::endl << high << std::endl << def << endl;
	std::cout << low2 << std::endl << high2 << std::endl << def2 << endl;
	std::cout << std::endl << "test 1" << std::endl;
	try
	{
		Form cringe("cringe", 10, 1412);
		std::cout << cringe << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "test 2" << std::endl;
	try
	{
		Form cringe("cringe", 2134124, 6);
		std::cout << cringe << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "test 3" << std::endl;
	try
	{
		low.beSigned(junior);
		def.beSigned(junior);
		high.beSigned(junior);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "test 4" << std::endl;
	try
	{
		low2.beSigned(senior);
		def2.beSigned(senior);
		high2.beSigned(senior);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << low << std::endl << high << std::endl << def << endl;
	std::cout << low2 << std::endl << high2 << std::endl << def2 << endl;
	cout << endl;
}