/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:45:10 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 13:50:21 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Point &src) {
  this->set_x(src.get_x());
  this->set_y(src.get_y());
}

Point::Point(const float &xn, const float &yn) : x(xn), y(yn) {}

Point::~Point() {}

const Fixed &Point::get_x() const { return this->x; }

const Fixed &Point::get_y() const { return this->y; }

void Point::set_x(const Fixed &x) { (Fixed) this->x = x; }
void Point::set_y(const Fixed &y) { (Fixed) this->y = y; }

Point &Point::operator=(const Point &src) {
  if (this != &src) {
    this->set_x(src.get_x());
    this->set_y(src.get_y());
  }
  return (*this);
}