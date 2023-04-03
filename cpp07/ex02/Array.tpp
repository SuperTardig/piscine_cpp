/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:07:41 by bperron           #+#    #+#             */
/*   Updated: 2023/04/03 14:15:17 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> Array<T>::Array() : arr(NULL), len(0) {}

template <class T> Array<T>::Array(unsigned int n) : len(n) {
  arr = new T[n];
}

template <class T> Array<T>::Array(Array<T> const &init) : len(init.len) {
  arr = new T[init.size()];
  for (int i = 0; i < len; i++)
    arr[i] = init[i];
}

template <class T> Array<T>::~Array() { delete [] this->arr;}

template <class T> int Array<T>::size() const { return len; }

template <class T> Array<T> &Array<T>::operator=(Array<T> const &init) {
  if (arr != init) {
    delete arr;
    len = init.len;
    arr = new T[init.size()];
    for (int i = 0; i < len; i++)
      arr[i] = init[i];
  }
}

template <class T> T &Array<T>::operator[](int index) const {
  if (index < 0)
    throw IndexTooLowException();
  if (index >= len)
    throw IndexTooHighException();
  return arr[index];
}
