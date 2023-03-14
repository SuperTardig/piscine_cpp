/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:06:00 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 14:19:29 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("some type of AAnimal") {
  std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string name) : type(name) {
  std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &init) : type(init.getType()) {
  std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal() { std::cout << "AAnimal destructor called" << std::endl; }

AAnimal &AAnimal::operator=(const AAnimal &src) {
  std::cout << "AAnimal copy assignment operator called" << std::endl;
  if (this != &src)
    this->setType(src.getType());
  return (*this);
}

const std::string &AAnimal::getType() const { return (this->type); }

void AAnimal::setType(const std::string &type) { this->type = type; }

void AAnimal::setIdea(const std::string &str, const int &i) {
  std::cout << "You can't set something that doesn't exist!" << std::endl;
}
