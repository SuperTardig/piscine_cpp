/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:45:33 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 10:13:38 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const { return (this->type); }

void Weapon::setType(const std::string &type) { this->type = type; }

Weapon::Weapon(const std::string &type) { this->setType(type); }

Weapon::Weapon() { this->setType("fist"); }

Weapon::~Weapon() {
  std::cout << "Weapon " << this->getType() << " has been destroyed"
            << std::endl;
}