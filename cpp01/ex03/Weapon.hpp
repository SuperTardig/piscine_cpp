/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:46:20 by bperron           #+#    #+#             */
/*   Updated: 2022/10/25 14:12:31 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string getType();
	void setType(std::string type);
};



#endif