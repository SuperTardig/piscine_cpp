/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:14:40 by bperron           #+#    #+#             */
/*   Updated: 2022/10/25 13:24:14 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name){
	if (n > 0){
		Zombie *hold;
		Zombie *first = new Zombie(name);
		hold = first;
		for (int i = 1; i <= n; i++){
			first->next = new Zombie(name);
			first = first->next;
		}
		return (hold);
	}
	return (NULL);
}