/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:12:48 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 08:13:01 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("wrong cat") {
  std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &init) {
  std::cout << "WrongCat copy constructor called" << std::endl;
  type = init.type;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
  std::cout << "WrongCat copy assignment operator called" << std::endl;
  if (this != &src)
    this->setType(src.getType());
  return (*this);
}

void WrongCat::makeSound() const { std::cout << "moo moo moo" << std::endl; }