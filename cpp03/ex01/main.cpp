/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:18:47 by bperron           #+#    #+#             */
/*   Updated: 2022/10/27 14:12:09 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	ClapTrap first("Clappy");
	ClapTrap second(first);
	ScavTrap third("Scavy");
	ScavTrap forth("lol");
	ScavTrap guard("Guardian");
	
 	forth = third;
	std::cout << std::endl << std::endl;
	first.attack("Clappier");
	for (int i = 0; i < 11 ; i++)
		second.beRepaired(1);
	std::cout << std::endl << std::endl;
	third.takeDamage(5);
	forth.takeDamage(100);
	forth.attack("Clappy");
	forth.beRepaired(1000);
	guard.guardGate();
	guard.attack("Scavy");
	guard.beRepaired(10);
	guard.takeDamage(10);
	guard.guardGate();
	guard.attack("Scavy");
	std::cout << std::endl << std::endl;
}