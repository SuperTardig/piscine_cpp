/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:48:37 by bperron           #+#    #+#             */
/*   Updated: 2023/03/16 10:03:51 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &init);
	~Dog();
	Dog &operator=(const Dog &src);

	void	makeSound() const;
};

#endif