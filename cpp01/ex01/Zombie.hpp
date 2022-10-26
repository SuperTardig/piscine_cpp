/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:19:46 by bperron           #+#    #+#             */
/*   Updated: 2022/10/25 13:17:26 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie();
	Zombie *next;
	void announce(void);
};

Zombie *zombieHorde(int n, std::string name);

#endif