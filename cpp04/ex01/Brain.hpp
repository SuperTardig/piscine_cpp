/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 07:41:35 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 10:36:12 by bperron          ###   ########.fr       */
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

	std::string	getIdea(int i);
};

#endif