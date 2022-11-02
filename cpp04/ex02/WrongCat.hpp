/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:12:51 by bperron           #+#    #+#             */
/*   Updated: 2022/11/01 14:20:48 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat &init);
	~WrongCat();
	WrongCat &operator=(const WrongCat &src);

	void	makeSound() const;
};

#endif