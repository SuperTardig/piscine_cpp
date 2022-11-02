/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:20:39 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 08:29:22 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog"){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &init){
	std::cout << "Dog copy constructor called" << std::endl;
	type = init.type;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src){	
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "wouf wouf bark bark" << std::endl;
}
