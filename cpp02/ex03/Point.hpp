/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:45:15 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 13:50:55 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
private:
  const Fixed x;
  const Fixed y;

public:
  Point();
  Point(const float &x, const float &y);
  Point(const Point &src);
  Point &operator=(const Point &src);

  const Fixed &get_x(void) const;
  const Fixed &get_y(void) const;

  void set_x(const Fixed &x);
  void set_y(const Fixed &y);

  ~Point();
};

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);
