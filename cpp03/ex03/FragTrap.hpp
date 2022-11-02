/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:03:56 by bperron           #+#    #+#             */
/*   Updated: 2022/11/01 09:14:22 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string n);
	FragTrap(const FragTrap &init);
	~FragTrap();
	
	FragTrap &operator=(const FragTrap &src);

	void	highFivesGuys(void);
};

#endif