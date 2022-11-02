/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:04:45 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 08:21:55 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap constructor called" << std::endl;
	name = "Default Scav";
	hp = 100;
	ep = 50;
	ad = 20;
	guard = false;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n){
	std::cout << "ScavTrap constructor called" << std::endl;
	name = n;
	hp = 100;
	ep = 50;
	ad = 20;
	guard = false;
}

ScavTrap::ScavTrap(const ScavTrap &init){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->name = init.name;
	this->ep = init.ep;
	this->ad = init.ad;
	this->hp = init.hp;
	this->guard = init.guard;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destrutor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src){	
	std::cout << "Scavtrap copy assignment operator called" << std::endl;
	if (this != &src){
		this->name = src.name;
		this->ep = src.ep;
		this->ad = src.ad;
		this->hp = src.hp;
	}
	return (*this);
}

void	ScavTrap::guardGate(){
	if (this->guard == false){
		std::cout << "ScavTrap " << this->name << " has activated gate keeper mode" << std::endl;
		this->guard = true;
	}
	else{
		std::cout << "ScavTrap " << this->name << " has deactivated gate keeper mode" << std::endl;
		this->guard = false;
	}
}

void	ScavTrap::attack(const std::string &target){
	if (this->ep > 0 && this->hp > 0){	
		this->ep--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl; 
	}
	else
		std::cout << "ScavTrap " << this->name << " doesn't have any energy points or hit points remaining" << std::endl;
}
