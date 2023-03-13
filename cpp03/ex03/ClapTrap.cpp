/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:17:54 by bperron           #+#    #+#             */
/*   Updated: 2023/03/13 07:47:00 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(10), ad(0), ep(10), name("Default ClapTrap") {
  std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : hp(10), ad(0), ep(10), name(n) {
  std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &init) {
  std::cout << "Claptrap copy constructor called" << std::endl;
  this->set_name(init.get_name());
  this->set_ep(init.get_ep());
  this->set_ad(init.get_ad());
  this->set_hp(init.get_hp());
}

ClapTrap::~ClapTrap() {
  std::cout << "Claptrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
  std::cout << "Claptrap copy assignment operator called" << std::endl;
  if (this != &src) {
    this->set_name(src.get_name());
    this->set_ep(src.get_ep());
    this->set_ad(src.get_ad());
    this->set_hp(src.get_hp());
  }
  return (*this);
}

void ClapTrap::set_hp(const unsigned int &hp) { this->hp = hp; }
void ClapTrap::set_ep(const unsigned int &ep) { this->ep = ep; }
void ClapTrap::set_ad(const unsigned int &ad) { this->ad = ad; }
void ClapTrap::set_name(const std::string &name) { this->name = name; }

const unsigned int &ClapTrap::get_hp() const { return this->hp; }
const unsigned int &ClapTrap::get_ep() const { return this->ep; }
const unsigned int &ClapTrap::get_ad() const { return this->ad; }
const std::string &ClapTrap::get_name() const { return this->name; }

void ClapTrap::attack(const std::string &target) {
  if (this->get_ep() > 0 && this->get_hp() > 0) {
    this->set_ep(this->get_ep() - 1);
    std::cout << "ClapTrap " << this->get_name() << " attacks " << target
              << ", causing " << this->get_ad() << " points of damage!"
              << std::endl;
  } else
    std::cout << "ClapTrap " << this->get_name()
              << " doesn't have any energy points or hit points remaining"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->get_hp() > 0) {
    if (this->get_hp() < amount)
      this->set_hp(0);
    else
      this->set_hp(this->get_hp() - amount);
    std::cout << "ClapTrap " << this->get_name() << " gets attacked, causing "
              << amount << " points of damage! He now has " << this->get_hp()
              << " of hit points" << std::endl;
  } else
    std::cout << "ClapTrap " << this->get_name()
              << " doesn't have any hit points remaining" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->get_ep() > 0) {
    this->set_ep(this->get_ep() - 1);
    this->set_hp(this->get_hp() + amount);
    std::cout << "ClapTrap " << this->get_name() << " repairs himself for "
              << amount << " of hit points. He now has " << this->get_hp()
              << " of hit points" << std::endl;
  } else
    std::cout << "ClapTrap " << this->get_name()
              << " doesn't have any energy points remaining" << std::endl;
}