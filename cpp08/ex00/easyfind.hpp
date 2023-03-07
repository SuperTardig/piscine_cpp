/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:02:37 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 13:03:03 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <array>
#include <deque>
#include <exception>
#include <forward_list>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

class DoesntExistException : public std::exception {
public:
  virtual const char *what() const throw() {
    return (
        "The number you're looking for doesn't exist in the given container");
  };
};
