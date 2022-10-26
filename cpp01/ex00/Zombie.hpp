/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:19:46 by bperron           #+#    #+#             */
/*   Updated: 2022/10/25 13:05:58 by bperron          ###   ########.fr       */
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
	void announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif