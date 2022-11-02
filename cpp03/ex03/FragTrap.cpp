/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:04:45 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 08:23:54 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap constructor called" << std::endl;
	name = "Default Frag";
	hp = 100;
	ep = 100;
	ad = 30;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n){
	std::cout << "FragTrap constructor called" << std::endl;
	name = n;
	hp = 100;
	ep = 100;
	ad = 30;
}

FragTrap::FragTrap(const FragTrap &init){
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->name = init.name;
	this->ep = init.ep;
	this->ad = init.ad;
	this->hp = init.hp;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destrutor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src){	
	std::cout << "Fragtrap copy assignment operator called" << std::endl;
	if (this != &src){
		this->name = src.name;
		this->ep = src.ep;
		this->ad = src.ad;
		this->hp = src.hp;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(){
	std::cout << "Watch out! FragTrap " << this->name << " is trying to high five everybody!" << std::endl;
}
