/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:17:54 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 08:25:00 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hp(10), ad(0), ep(10), name("Default Clap"){
	std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : hp(10), ad(0), ep(10), name(n){
	std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &init){
	std::cout << "Claptrap copy constructor called" << std::endl;
	this->name = init.name;
	this->ep = init.ep;
	this->ad = init.ad;
	this->hp = init.hp;
}

ClapTrap::~ClapTrap(){
	std::cout << "Claptrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src){	
	std::cout << "Claptrap copy assignment operator called" << std::endl;
	if (this != &src){
		this->name = src.name;
		this->ep = src.ep;
		this->ad = src.ad;
		this->hp = src.hp;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target){
	if (this->ep > 0 && this->hp > 0){	
		this->ep--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have any energy points or hit points remaining" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->hp > 0){
		if (this->hp < amount)
			this->hp = 0;
		else
			this->hp -= amount;
		std::cout << "ClapTrap " << this->name << " gets attacked, causing " << amount << " points of damage! He now has " << this->hp << " of hit points" << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have any hit points remaining" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->ep > 0){	
		this->ep--;
		this->hp += amount;
		std::cout << "ClapTrap " << this->name << " repairs himself for " << amount << " of hit points. He now has " << this->hp << " of hit points" << std::endl; 
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have any energy points remaining" << std::endl;
}