/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:56:53 by bperron           #+#    #+#             */
/*   Updated: 2023/03/07 13:05:20 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
  typedef typename std::stack<T>::container_type::iterator iterator;

  MutantStack<T>(){};
  MutantStack<T>(MutantStack<T> &src) { *this = src; };
  ~MutantStack<T>(){};

  MutantStack<T> &operator=(MutantStack<T> &src) {
    if (this != src) {
      this->c = src.c;
    }
    return (this);
  };

  iterator begin() { return this->c.begin(); };
  iterator end() { return this->c.end(); };
};
