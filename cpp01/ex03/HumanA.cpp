/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:10:55 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 08:24:29 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack() {
  std::cout << this->get_name() << " attacks with their "
            << this->weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &type) : weapon(type) {
  this->set_name(name);
}

HumanA::~HumanA() {
  std::cout << "HumanA " << this->get_name() << " has been destroyed"
            << std::endl;
}

const std::string &HumanA::get_name() const { return this->name; }

void HumanA::set_name(const std::string &name) { this->name = name; }