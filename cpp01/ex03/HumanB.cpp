/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:46:02 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 10:13:33 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() {
  if (this->type)
    std::cout << this->get_name() << " attacks with their "
              << this->type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &type) { this->type = &type; }

HumanB::HumanB(const std::string &name) : type(NULL) { this->set_name(name); }

HumanB::~HumanB() {
  std::cout << "HumanB " << this->get_name() << " has been destroyed"
            << std::endl;
}

const std::string &HumanB::get_name() const { return this->name; }

void HumanB::set_name(const std::string &name) { this->name = name; }