/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:46:29 by bperron           #+#    #+#             */
/*   Updated: 2022/10/25 14:23:06 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
private:
	std::string name;
	Weapon 		&weapon;
public:
	HumanA(std::string name, Weapon &type);
	~HumanA();
	void	attack();
};

#endif