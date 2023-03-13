/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:55:20 by bperron           #+#    #+#             */
/*   Updated: 2023/03/13 08:01:21 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ScavTrap(), FragTrap(), ClapTrap("Default Diam_clap_name") {
  std::cout << "DiamondTrap default constructor called" << std::endl;
  this->set_name("Default Diam");
  this->set_hp(100);
  this->set_ep(50);
  this->set_ad(30);
}

DiamondTrap::DiamondTrap(std::string n)
    : ScavTrap(n), FragTrap(n), ClapTrap(n) {
  std::cout << "DiamondTrap constructor called" << std::endl;
  this->ClapTrap::name.append("_clap_name");
  this->set_name(n);
  this->set_hp(100);
  this->set_ep(50);
  this->set_ad(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap &init) {
  std::cout << "DiamondTrap copy constructor called" << std::endl;
  this->ClapTrap::set_name(init.ClapTrap::get_name());
  this->set_name(init.get_name());
  this->set_ep(init.get_ep());
  this->set_ad(init.get_ad());
  this->set_hp(init.get_hp());
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamonTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
  std::cout << "DiamondTrap copy assignment operator called" << std::endl;
  if (this != &src) {
    this->set_name(src.get_name());
    this->ClapTrap::set_name(src.ClapTrap::get_name());
    this->set_ep(src.get_ep());
    this->set_ad(src.get_ad());
    this->set_hp(src.get_hp());
  }
  return (*this);
}

void DiamondTrap::set_name(const std::string &name) { this->name = name; }

const std::string &DiamondTrap::get_name() const { return this->name; }

void DiamondTrap::WhoAmI() {
  std::cout << "My DiamondTrap name is " << name << " and my ClapTrap name is "
            << ClapTrap::name << std::endl;
}