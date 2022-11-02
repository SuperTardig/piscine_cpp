/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:05:24 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 10:36:07 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
	std::string hold[100] = {"trap", "suggest", "icky", "stage", "name", "soda", "scatter", "wink", "work", "gigantic", "cruel", "lonely", "sophisicated", "hose", "honorable", "steam", "spoon", "macho", "road", "well-groomed",
    		"regret", "befitting", "lunchroom", "left", "consist", "elastic", "inconclusive", "rail", "scarce", "miss", "understood", "channel", "moor", "second", "absorbed", "dusty", "penitent", "industrious",
		    "cautious", "burly", "scarf", "unique", "gleaming", "peace", "fool", "afraid", "attend", "obsolete", "pies", "rinse", "theory", "squeak", "winter", "standing", "pretend", "maid", "straight", "downtown",
    		"high", "attractive", "competition", "selection", "mice", "suggestion", "prevent", "magic", "polish", "berserk", "huge", "mark", "intelligent", "absurd", "taboo", "unbiased", "realize", "rapid", "abandoned",
		    "book", "milk", "torpid", "boot", "far", "hall", "childlike", "rural", "choke", "quarrelsome", "feeble", "bite", "jelly", "corn", "stay", "avoid", "test", "nine", "chance", "observe", "jail", "ocean", "story"};
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = hold[i];
	}
}

Brain::Brain(const Brain &init){
	std::cout << "Brain copy constructor called" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = init.ideas[i];
	}
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src){	
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &src){
		for (size_t i = 0; i < 100; i++)
		{
			ideas[i] = src.ideas[i];
		}
	}
	return (*this);
}

std::string Brain::getIdea(int i){
	return (ideas[i]);
}