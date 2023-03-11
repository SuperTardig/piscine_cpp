/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tardig <tardig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:54:16 by bperron           #+#    #+#             */
/*   Updated: 2023/03/10 20:01:13 by tardig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
	std::string name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string n);
	DiamondTrap(const DiamondTrap &init);
	
	DiamondTrap &operator=(const DiamondTrap &src);

	void	WhoAmI();
	using	ScavTrap::attack;
};

#endif