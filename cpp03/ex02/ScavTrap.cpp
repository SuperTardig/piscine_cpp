/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:04:45 by bperron           #+#    #+#             */
/*   Updated: 2023/03/13 07:48:15 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "ScavTrap constructor called" << std::endl;
  this->set_name("Default Scav");
  this->set_ep(50);
  this->set_ad(20);
  this->set_hp(100);
  this->set_guard(false);
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n) {
  std::cout << "ScavTrap constructor called" << std::endl;
  this->set_name(n);
  this->set_ep(50);
  this->set_ad(20);
  this->set_hp(100);
  this->set_guard(false);
}

ScavTrap::ScavTrap(const ScavTrap &init) {
  std::cout << "ScavTrap copy constructor called" << std::endl;
  this->set_name(init.get_name());
  this->set_ep(init.get_ep());
  this->set_ad(init.get_ad());
  this->set_hp(init.get_hp());
  this->set_guard(init.get_guard());
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destrutor called" << std::endl; }

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
  std::cout << "Scavtrap copy assignment operator called" << std::endl;
  if (this != &src) {
    this->set_name(src.get_name());
    this->set_ep(src.get_ep());
    this->set_ad(src.get_ad());
    this->set_hp(src.get_hp());
    this->set_guard(src.get_guard());
  }
  return (*this);
}

void ScavTrap::set_guard(const bool &guard) { this->guard = guard; }

const bool &ScavTrap::get_guard() const { return this->guard; }

void ScavTrap::guardGate() {
  if (this->guard == false) {
    std::cout << "ScavTrap " << this->name << " has activated gate keeper mode"
              << std::endl;
    this->guard = true;
  } else {
    std::cout << "ScavTrap " << this->name
              << " has deactivated gate keeper mode" << std::endl;
    this->guard = false;
  }
}

void ScavTrap::attack(const std::string &target) {
  if (this->ep > 0 && this->hp > 0) {
    this->ep--;
    std::cout << "ScavTrap " << this->name << " attacks " << target
              << ", causing " << this->ad << " points of damage!" << std::endl;
  } else
    std::cout << "ScavTrap " << this->name
              << " doesn't have any energy points or hit points remaining"
              << std::endl;
}
