/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:26:15 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 08:15:55 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : nb(0){
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &init){
	std::cout << "Copy Constructor called" << std::endl;
	nb = init.getRawBits();
}

Fixed::Fixed(const int init){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(init << fb);
}

Fixed::Fixed(const float init){
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(init * 256));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->nb = src.getRawBits();	
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &value){
	os << value.toFloat();
	return (os);
}

int		Fixed::getRawBits() const {
	return nb;
}

void	Fixed::setRawBits(int const raw){
	nb = raw;
}

float	Fixed::toFloat() const{
	return ((float) this->nb / 256);
}

int		Fixed::toInt() const{
	return (this->nb >> fb);
}

const int Fixed::fb = 8;