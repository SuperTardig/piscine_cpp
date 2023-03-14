/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:20:39 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 14:14:22 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog") {
  brain = new Brain();
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &init) {
  std::cout << "Dog copy constructor called" << std::endl;
  brain = new Brain(*init.brain->getBrain());
  this->setType(init.getType());
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
  std::cout << "Dog copy assignment operator called" << std::endl;
  if (this != &src) {
    this->setType(src.getType());
    this->brain->setBrain(*src.brain->getBrain());
  }
  return (*this);
}

void Dog::setIdea(const std::string &idea, const int &i) {
  this->brain->setIdea(idea, i);
}

void Dog::makeSound() const { std::cout << "wouf wouf bark bark" << std::endl; }

void Dog::showIdea(int i) {
  std::cout << "Dog just had an idea: " << brain->getIdea(i)
            << ". Maybe it's not so great after all..." << std::endl;
}