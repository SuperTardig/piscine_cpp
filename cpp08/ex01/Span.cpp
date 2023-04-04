/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:47:09 by bperron           #+#    #+#             */
/*   Updated: 2023/04/04 07:50:31 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0), vec(0) {}

Span::Span(int n) : size(n), vec(0) {}

Span::Span(const Span &src) : size(src.size) { vec.resize(src.size); }

Span::~Span() {}

void Span::addNumber(int n) {
  if (vec.size() > size)
    throw FullExecption();
  vec.push_back(n);
}

void Span::bigAddNumber(int n) {
  if (vec.size() + n > size)
    throw FullExecption();
  std::vector<int> hold(n);
  srand(time(0));
  std::generate(hold.begin(), hold.end(), rand);
  vec.insert(vec.end(), hold.begin(), hold.end());
}

int Span::longestSpan() {
  int spam;
  int hold;
  std::sort(vec.begin(), vec.end());

  if (vec.size() <= 1)
    throw NoSpanExecption();
  spam = vec[vec.size() - 1] - vec[0];
  return spam;
}

int Span::shortestSpan() {
  int spam;
  int hold;
  std::sort(vec.begin(), vec.end());

  if (vec.size() <= 1)
    throw NoSpanExecption();
  spam = vec[1] - vec[0];
  for (int i = 1; i < vec.size() - 1; i++) {
    hold = vec[i + 1] - vec[i];
    if (hold < spam)
      spam = hold;
  }
  return spam;
}

Span &Span::operator=(const Span &src) {
  if (this != &src) {
  }
  return *this;
}
