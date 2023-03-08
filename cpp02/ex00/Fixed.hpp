/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:25:27 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 14:09:54 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
  int nb;
  static const int fb;

public:
  Fixed();
  Fixed(const Fixed &init);
  Fixed &operator=(const Fixed &src);
  ~Fixed();
  int getRawBits() const;
  void setRawBits(int const raw);
};

#endif