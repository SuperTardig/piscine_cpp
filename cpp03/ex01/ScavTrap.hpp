/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:03:56 by bperron           #+#    #+#             */
/*   Updated: 2022/11/01 10:17:54 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:
	bool	guard;
public:
	ScavTrap();
	ScavTrap(std::string n);
	ScavTrap(const ScavTrap &init);
	~ScavTrap();
	
	ScavTrap &operator=(const ScavTrap &src);

	void	guardGate();
	void	attack(const std::string &target);
};

#endif