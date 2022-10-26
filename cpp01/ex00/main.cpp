/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:18:49 by bperron           #+#    #+#             */
/*   Updated: 2022/10/26 08:30:27 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie Zammy("lil bitch");
	Zammy.announce();
	Zombie *empty = newZombie("Zaros Chad");
	empty->announce();
	randomChump("big pepe");
	delete empty;
	return (0);
}