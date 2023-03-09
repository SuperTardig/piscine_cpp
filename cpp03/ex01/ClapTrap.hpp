/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap copy.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tardig <tardig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:17:44 by bperron           #+#    #+#             */
/*   Updated: 2023/03/09 17:04:47 by tardig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string		name;
	unsigned int	hp;
	unsigned int	ep;
	unsigned int	ad;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &init);
	ClapTrap &operator=(const ClapTrap &src);
	~ClapTrap();

	void	set_hp(const unsigned int &hp);
	void	set_ep(const unsigned int &ep);
	void	set_ad(const unsigned int &ad);
	void	set_name(const std::string &name);

	const unsigned int &get_hp() const;
	const unsigned int &get_ep() const;
	const unsigned int &get_ad() const;
	const std::string &get_name() const;
	
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif