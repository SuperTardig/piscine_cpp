/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:02:37 by bperron           #+#    #+#             */
/*   Updated: 2022/11/22 10:51:09 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <iterator>
#include <vector>
#include <deque>
#include <list>
#include <array>
#include <forward_list>

class DoesntExistException : public std::exception{
	public:
			virtual const char *what() const throw(){return ("The number you're looking for doesn't exist in the given container");};
};
