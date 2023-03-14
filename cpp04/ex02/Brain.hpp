/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 07:41:35 by bperron           #+#    #+#             */
/*   Updated: 2023/03/14 10:48:06 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &init);
	~Brain();
	Brain &operator=(const Brain &src);

	const	Brain *getBrain() const;
	void	setBrain(const Brain &brain);

	void	setIdea(const std::string &idea, const int &i);
	const std::string	&getIdea(const int &i) const;
};

#endif