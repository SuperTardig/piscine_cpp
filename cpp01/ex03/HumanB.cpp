/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:46:02 by bperron           #+#    #+#             */
/*   Updated: 2022/10/26 08:03:55 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(){
	std::cout << this->name << " attacks with their " << this->type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &type){
	delete this->type;
	this->type = &type;
}

HumanB::HumanB(std::string name) : 
	name(name){
	this->type = new Weapon;
}

HumanB::~HumanB(){
	std::cout << "HumanB " << this->name << " has been destroyed" << std::endl; 
}