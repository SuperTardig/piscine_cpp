/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:55:20 by bperron           #+#    #+#             */
/*   Updated: 2022/11/01 10:38:14 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(), ClapTrap("Default Diam_clap_name"){
	std::cout << "DiamondTrap default constructor called" << std::endl;
	name = "Default Diam";
	hp = 100;
	ep = 50;
	ad = 30;
}

DiamondTrap::DiamondTrap(std::string n) : ScavTrap(n), FragTrap(n), ClapTrap(n){
	std::cout << "DiamondTrap constructor called" << std::endl;
	name = n;
	this->ClapTrap::name.append("_clap_name");
	hp = 100;
	ep = 50;
	ad = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &init){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = init;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamonTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src){	
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &src){
		this->name = src.name;
		this->ep = src.ep;
		this->ad = src.ad;
		this->hp = src.hp;
	}
	return (*this);
}

void	DiamondTrap::WhoAmI(){
	std::cout << "My DiamondTrap name is " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}