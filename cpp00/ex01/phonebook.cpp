/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:55:40 by bperron           #+#    #+#             */
/*   Updated: 2022/10/25 11:30:50 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

void	Phonebook::add(){
	if (this->where > 7)
		this->where = 0;
	this->Contacts[this->where].add();
	this->total++;	
	this->where++;
}

void	Phonebook::print_all(){
	int	choice;
	
	if (this->where > 0){
		std::cout << "Index     |First Name|Last Name |Nickname  \n";
		for (int i = 0; i < this->where; i++)
			this->Contacts[i].print_all(i + 1);
		std::cout << "which Contact do you want to see their information: ";
		if (std::cin >> choice){
			if (choice <= this->total)
				this->Contacts[choice - 1].print_one();
			else
				std::cout << "the Contact you're looking for doesn't exist\n";
		}
		else
			std::cout << "please enter a numeric argument\n";
	}
	else
		std::cout << "their is currently no Contacts in your phonebook\n";
}

Phonebook::Phonebook(){
	this->where = 0;
	this->total = 0;
}

Phonebook::~Phonebook(){
}