/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:14:40 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 08:03:39 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name){
	if (n > 0){
		Zombie *horde = new Zombie[n];
		for (int i = 0; i < n; i++)
			horde[i].set_name(name);
		return (horde);
	}
	return (NULL);
}