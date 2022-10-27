/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:25:27 by bperron           #+#    #+#             */
/*   Updated: 2022/10/27 10:44:30 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int					nb;
	static const int	fb; 
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
	
	static Fixed 	min(Fixed &a, Fixed &b);
	static Fixed 	max(Fixed &a, Fixed &b);
	static Fixed 	min(const Fixed &a, const Fixed &b);
	static Fixed 	max(const Fixed &a, const Fixed &b);
	float	toFloat() const;
	void	setRawBits(int const raw);
	int		getRawBits() const;
	int		toInt() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif