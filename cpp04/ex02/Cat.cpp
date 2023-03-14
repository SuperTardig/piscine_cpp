/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:21:05 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 14:14:07 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("cat") {
  brain = new Brain();
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &init) {
  std::cout << "Cat copy constructor called" << std::endl;
  brain = new Brain(*init.brain->getBrain());
  this->setType(init.getType());
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
  std::cout << "Cat copy assignment operator called" << std::endl;
  if (this != &src) {
    this->setType(src.getType());
    this->brain->setBrain(*src.brain->getBrain());
  }
  return (*this);
}

void Cat::setIdea(const std::string &idea, const int &i) {
  this->brain->setIdea(idea, i);
}

void Cat::makeSound() const { std::cout << "meow meow meow" << std::endl; }

void Cat::showIdea(int i) {
  std::cout << "Cat just had an idea: " << brain->getIdea(i)
            << ". Maybe it's not so great after all..." << std::endl;
}
