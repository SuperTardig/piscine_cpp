/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:37:10 by bperron           #+#    #+#             */
/*   Updated: 2022/10/25 11:30:36 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void	Contact::add(){
	while (this->first.empty()){
		std::cout << "please enter the first name of the Contact: ";
		std::cin >> this->first;
	}
	while (this->last.empty()){
		std::cout << "please enter the last name of the Contact: ";
		std::cin >> this->last;
	}
	while (this->nick.empty()){
		std::cout << "please enter the nickname of the Contact: ";
		std::cin >> this->nick;
	}
	while (this->number.empty()){
		std::cout << "please enter the phone number of the Contact: ";
		std::cin >> this->number;
	}
	while (this->secret.empty()){
		std::cout << "please enter the darkest secret of the Contact: ";
		std::cin >> this->secret;
	}
}

void	Contact::print_all(int i){
	std::cout << i << "         |";
	for (int j = 0; j < 10; j++){
		if (j == 9 && this->first[j]){
			std::cout << ".";
			break;
		}
		if (this->first[j])
			std::cout << this->first[j];
		else
			std::cout << " ";
	}
	std::cout << "|";
	for (int j = 0; j < 10; j++){
		if (j == 9 && this->last[j]){
			std::cout << ".";
			break;
		}
		if (this->last[j])
			std::cout << this->last[j];
		else
			std::cout << " ";
	}
	std::cout << "|";
	for (int j = 0; j < 10; j++){
		if (j == 9 && this->nick[j]){
			std::cout << ".";
			break;
		}
		if (this->nick[j])
			std::cout << this->nick[j];
		else
			std::cout << " ";
	}
	std::cout << "\n";
}
	
void	Contact::print_one(){
	std::cout << "First name: " << this->first << std::endl;
	std::cout << "Last name: " << this->last << std::endl;
	std::cout << "Nickname: " << this->nick << std::endl;
	std::cout << "Telephone number: " << this->number << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}