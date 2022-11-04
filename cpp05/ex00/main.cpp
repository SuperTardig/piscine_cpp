/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:51:44 by bperron           #+#    #+#             */
/*   Updated: 2022/11/03 10:54:55 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	Bureaucrat junior(149, "junior");
	Bureaucrat	senior(5, "senior");
	std::cout << std::endl;
	std::cout << junior << std::endl << senior << std::endl;
	std::cout << std::endl << "test 1" << std::endl;
	try
	{
		Bureaucrat cringe(5343, "cringe");
		std::cout << cringe << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "test 2" << std::endl;
	try
	{
		Bureaucrat cringe(-10, "cringe");
		std::cout << cringe << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "test 3" << std::endl;
	try
	{
		for (int i = 0; i < 4; i++){
			senior.gradeUp();
		}
		std::cout << senior << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "test 4" << std::endl;
	try
	{
		for (int i = 0; i < 4; i++){
			junior.gradeDown();
			std::cout << junior << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << junior << std::endl << senior << std::endl;
	std::cout << std::endl;
}