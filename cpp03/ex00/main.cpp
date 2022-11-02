/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:18:47 by bperron           #+#    #+#             */
/*   Updated: 2022/10/27 11:00:31 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap first("Clappy");
	ClapTrap second(first);
	ClapTrap third("Clappier");
	ClapTrap forth("lol");
	
	forth = third;
	first.attack("Clappier");
	for (int i = 0; i < 11 ; i++)
		second.beRepaired(1);
	third.takeDamage(5);
	forth.takeDamage(100);
	forth.attack("Clappy");
	forth.beRepaired(1000);
}