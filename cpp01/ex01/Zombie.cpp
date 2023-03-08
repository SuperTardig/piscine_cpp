/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:19:41 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 08:05:19 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void) {
  std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string &name) { this->set_name(name); }

Zombie::Zombie() { this->set_name("Random dude"); }

Zombie::~Zombie() {
  std::cout << this->get_name() << " has been destroyed" << std::endl;
}

void Zombie::set_name(const std::string &name) { this->name = name; }

const std::string &Zombie::get_name() const { return this->name; }