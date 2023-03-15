/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:12:17 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 08:12:12 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("some type of bad animal"){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &init) : type(init.getType()){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){	
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &src)
		this->setType(src.getType());
	return (*this);
}

const std::string &WrongAnimal::getType() const { return (this->type); }

void WrongAnimal::setType(const std::string &type) { this->type = type; }


void		WrongAnimal::makeSound() const{
		std::cout << "hi im bob" << std::endl;
}