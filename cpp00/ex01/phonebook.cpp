/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:55:40 by bperron           #+#    #+#             */
/*   Updated: 2022/10/24 14:29:25 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

void	phonebook::add(){
	if (this->where > 7)
		this->where = 0;
	this->contacts[this->where].add();
	this->total++;	
	this->where++;
}

void	phonebook::print_all(){
	int	choice;
	
	if (this->where > 0){
		std::cout << "Index     |First Name|Last Name |Nickname  \n";
		for (int i = 0; i < this->where; i++)
			this->contacts[i].print_all(i + 1);
		std::cout << "which contact do you want to see their information: ";
		if (std::cin >> choice){
			if (choice <= this->total)
				this->contacts[choice - 1].print_one();
			else
				std::cout << "the contact you're looking for doesn't exist\n";
		}
		else
			std::cout << "please enter a numeric argument\n";
	}
	else
		std::cout << "their is currently no contacts in your phonebook\n";
}

phonebook::phonebook(){
	this->where = 0;
	this->total = 0;
}

phonebook::~phonebook(){
}