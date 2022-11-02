/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:21:05 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 08:26:30 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat"){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &init){
	std::cout << "Cat copy constructor called" << std::endl;
	type = init.type;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src){	
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "meow meow meow" << std::endl;
}
