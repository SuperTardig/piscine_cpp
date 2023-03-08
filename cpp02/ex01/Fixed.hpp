/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:25:27 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 14:10:12 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
private:
  int nb;
  static const int fb;

public:
  Fixed();
  Fixed(const Fixed &init);
  Fixed(const int &init);
  Fixed(const float &init);
  ~Fixed();
  Fixed &operator=(const Fixed &src);
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat() const;
  int toInt() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif