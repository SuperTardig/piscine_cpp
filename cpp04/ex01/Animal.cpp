/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:06:00 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 14:18:52 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("some type of animal") {
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string name) : type(name) {
  std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &init) : type(init.getType()) {
  std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }

Animal &Animal::operator=(const Animal &src) {
  std::cout << "Animal copy assignment operator called" << std::endl;
  if (this != &src)
    this->setType(src.getType());
  return (*this);
}

const std::string &Animal::getType() const { return (this->type); }

void Animal::setType(const std::string &type) { this->type = type; }

void Animal::setIdea(const std::string &str, const int &i) {
  std::cout << "You can't set something that doesn't exist!" << std::endl;
}

void Animal::showIdea(int i) {
  std::cout << "This object doesn't have a brain!" << std::endl;
}

void Animal::makeSound() const {
  std::cout << "Weird animalistic noise echoes from behind you" << std::endl;
}
