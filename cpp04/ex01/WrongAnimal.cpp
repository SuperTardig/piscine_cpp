/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:12:17 by bperron           #+#    #+#             */
/*   Updated: 2022/11/01 14:14:51 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("some type of animal"){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &init){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = init;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src){	
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string WrongAnimal::getType() const{
	return (this->type);
}

void		WrongAnimal::makeSound() const{
		std::cout << "Weird animalistic noise echoes from behind you" << std::endl;
}