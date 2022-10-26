/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:45:33 by bperron           #+#    #+#             */
/*   Updated: 2022/10/26 08:04:26 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

const std::string Weapon::getType(){
	return (this->type);
}

void	Weapon::setType(std::string type){
	this->type = type;
}

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::Weapon(){
	this->type = "fist";
}

Weapon::~Weapon(){
	std::cout << "Weapon " << this->type << " has been destroyed" << std::endl; 
}