/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:18:49 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 13:57:08 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie *z = zombieHorde(5, "chaos demon");
	for (int i = 0; i < 5; i++)
		z[i].announce();
	delete[] z;
	z = zombieHorde(0, "test");
	for (int i = 0; i < 0; i++)
		z[i].announce();
	delete[] z;
	z = zombieHorde(100, "pepe");
	for (int i = 0; i < 100; i++)
		z[i].announce();
	delete[] z;
	return (0);
}