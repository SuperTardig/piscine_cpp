/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:18:47 by bperron           #+#    #+#             */
/*   Updated: 2022/11/01 10:23:31 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavy");
	FragTrap frag("Fraggy");
	DiamondTrap diam("diamy");
	
	std::cout << std::endl << std::endl;
	clap.attack("Clappier");
	clap.takeDamage(5);
	clap.beRepaired(10);
	scav.guardGate();
	scav.attack("Scavier");
	scav.beRepaired(10);
	scav.takeDamage(10);
	scav.guardGate();
	scav.attack("Scavier");
	frag.highFivesGuys();
	frag.attack("fragier");
	frag.beRepaired(10);
	frag.takeDamage(10);
	diam.guardGate();
	diam.highFivesGuys();
	diam.attack("diamer");
	diam.beRepaired(10);
	diam.takeDamage(10);
	diam.guardGate();
	diam.WhoAmI();
	std::cout << std::endl << std::endl;
}