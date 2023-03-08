/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:25:27 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 13:50:35 by bperron          ###   ########.fr       */
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
  Fixed(const int init);
  Fixed(const float init);
  ~Fixed();

  Fixed &operator=(const Fixed &src);
  int operator>(const Fixed &src) const;
  int operator<(const Fixed &src) const;
  int operator>=(const Fixed &src) const;
  int operator<=(const Fixed &src) const;
  int operator==(const Fixed &src) const;
  int operator!=(const Fixed &src) const;
  float operator+(const Fixed &src) const;
  float operator-(const Fixed &src) const;
  float operator*(const Fixed &src) const;
  float operator/(const Fixed &src) const;
  Fixed &operator++();
  Fixed &operator--();
  Fixed operator++(int);
  Fixed operator--(int);

  static Fixed &min(Fixed &a, Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static const Fixed &max(const Fixed &a, const Fixed &b);
  float toFloat() const;
  void setRawBits(int const raw);
  int getRawBits() const;
  int toInt() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif