/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:06:00 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 11:38:31 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("some type of animal"){
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string name) : type(name){
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &init){
	std::cout << "Animal copy constructor called" << std::endl;
	type = init.type;
}

AAnimal::~AAnimal(){
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src){	
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string AAnimal::getType() const{
	return (this->type);
}

