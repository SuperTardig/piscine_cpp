/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:04:45 by bperron           #+#    #+#             */
/*   Updated: 2023/03/13 07:48:14 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  std::cout << "FragTrap constructor called" << std::endl;
  this->set_name("Default Frag");
  this->set_ep(100);
  this->set_ad(30);
  this->set_hp(100);
}

FragTrap::FragTrap(std::string n) : ClapTrap(n) {
  std::cout << "FragTrap constructor called" << std::endl;
  this->set_name(n);
  this->set_ep(100);
  this->set_ad(30);
  this->set_hp(100);
}

FragTrap::FragTrap(const FragTrap &init) {
  std::cout << "FragTrap copy constructor called" << std::endl;
  this->set_name(init.get_name());
  this->set_ep(init.get_ep());
  this->set_ad(init.get_ad());
  this->set_hp(init.get_hp());
}

FragTrap::~FragTrap() { std::cout << "FragTrap destrutor called" << std::endl; }

FragTrap &FragTrap::operator=(const FragTrap &src) {
  std::cout << "Fragtrap copy assignment operator called" << std::endl;
  if (this != &src) {
    this->set_name(src.get_name());
    this->set_ep(src.get_ep());
    this->set_ad(src.get_ad());
    this->set_hp(src.get_hp());
  }
  return (*this);
}

void FragTrap::highFivesGuys() {
  std::cout << "Watch out! FragTrap " << this->name
            << " is trying to high five everybody!" << std::endl;
}
