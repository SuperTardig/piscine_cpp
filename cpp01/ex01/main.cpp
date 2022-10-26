/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:18:49 by bperron           #+#    #+#             */
/*   Updated: 2022/10/26 08:30:17 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie *z = zombieHorde(5, "chaos demon");
	Zombie *hold = z;
	Zombie *temp;
	if (hold){
		while (hold->next){
			hold->announce();
			hold = hold->next;
		}
		hold = z;
		while (hold->next){
			temp = hold->next;
			delete hold;
			hold = temp;
		}
	}
	z = zombieHorde(0, "test");
	hold = z;
	if (hold){
		while (hold->next){
			hold->announce();
			hold = hold->next;
		}
		hold = z;
		while (hold->next){
			temp = hold->next;
			delete hold;
			hold = temp;
		}
	}
	z = zombieHorde(100, "pepe");
	hold = z;
	if (hold){
		while (hold->next){
			hold->announce();
			hold = hold->next;
		}
		hold = z;
		while (hold->next){
			temp = hold->next;
			delete hold;
			hold = temp;
		}
	}
	return (0);
}