/* ************************************************************************** */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:42:26 by bperron           #+#    #+#             */
/*   Updated: 2022/11/01 14:29:56 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal *badboi = new WrongCat();
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	Dog			goodboi;
	Cat			gooderboi;
	WrongCat	badderboi;
	
	
	std::cout << std::endl << std::endl;
	std::cout << "meta: " << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << "j: " << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << "i: " << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << "goodboi: " << goodboi.getType() << " " << std::endl;
	goodboi.makeSound();
	std::cout << "gooderboi: " << gooderboi.getType() << " " << std::endl;
	gooderboi.makeSound();
	std::cout << "badboi: " << badboi->getType() << " " << std::endl;
	badboi->makeSound();
	std::cout << "badderboi: " << badderboi.getType() << " " << std::endl;
	badderboi.makeSound();
	std::cout << std::endl << std::endl;
	
	delete meta;
	delete i;
	delete j;
	delete badboi;
}