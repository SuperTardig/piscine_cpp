/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:29:20 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 08:11:17 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){
	std::string var = "HI THIS IS BRAIN";
	std::string *ptr = &var;
	std::string &ref = var;

	std::cout << "Addres of var: " << &var << std::endl;
	std::cout << "Addres of ptr: " << ptr << std::endl;
	std::cout << "Addres of ref: " << &ref << std::endl;
	std::cout << "Value of var: " << var << std::endl;
	std::cout << "Value of ptr: " << *ptr << std::endl;
	std::cout << "Value of ref: " << ref << std::endl;
	return (0);
}