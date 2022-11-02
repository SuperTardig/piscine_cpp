/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:26:15 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 08:16:04 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructor & destructor
Fixed::Fixed() : nb(0){
	//std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &init){
	//std::cout << "Copy Constructor called" << std::endl;
	nb = init.getRawBits();
}

Fixed::Fixed(const int init){
	//std::cout << "Int constructor called" << std::endl;
	this->setRawBits(init << fb);
}

Fixed::Fixed(const float init){
	//std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(init * 256));
}

Fixed::~Fixed(){
	//std::cout << "Destructor called" << std::endl;
}

//operator overload
Fixed &Fixed::operator=(const Fixed &src){
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->nb = src.getRawBits();	
	return (*this);
}

int Fixed::operator>(const Fixed &src) const{
	if (this->nb > src.nb)
		return (1);
	else 
		return (0);
}

int Fixed::operator<(const Fixed &src) const{
	if (this->nb < src.nb)
		return (1);
	else 
		return (0);
}

int Fixed::operator>=(const Fixed &src) const{
	if (this->nb >= src.nb)
		return (1);
	else 
		return (0);
}

int Fixed::operator<=(const Fixed &src) const{
	if (this->nb <= src.nb)
		return (1);
	else 
		return (0);
}

int Fixed::operator==(const Fixed &src) const{
	if (this->nb == src.nb)
		return (1);
	else 
		return (0);
}

int Fixed::operator!=(const Fixed &src) const{
	if (this->nb != src.nb)
		return (1);
	else 
		return (0);
}

float Fixed::operator+(const Fixed &src) const{
	return (this->toFloat() + src.toFloat());
}

float Fixed::operator-(const Fixed &src) const{
	return (this->toFloat() - src.toFloat());
}

float Fixed::operator*(const Fixed &src) const{
	return (this->toFloat() * src.toFloat());
}

float Fixed::operator/(const Fixed &src) const{
	return (this->toFloat() / src.toFloat());
}

Fixed &Fixed::operator++(){
	++this->nb;
	return (*this);
}

Fixed &Fixed::operator--(){
	--this->nb;
	return (*this);
}
	
Fixed Fixed::operator++(int){
	Fixed pre(*this);
	this->nb++;
	return (pre);
}

Fixed Fixed::operator--(int){
	Fixed pre(*this);
	this->nb--;
	return (pre);
}

std::ostream &operator<<(std::ostream &os, const Fixed &value){
	os << value.toFloat();
	return (os);
}

//functions
Fixed 	Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed 	Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed 	Fixed::min(const Fixed &a, const Fixed &b){
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed 	Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return (a);
	else
		return (b);
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

//static variable
const int Fixed::fb = 8;