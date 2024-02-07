/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:18 by diosanto          #+#    #+#             */
/*   Updated: 2024/02/07 12:32:23 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fractionalBits = 8;

Fixed::Fixed(void)
{
	fixedPointNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

//destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//constructor copy
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value << fractionalBits);
}

Fixed::Fixed(const float value)
{
	std::cout << "FLoat constructor called" << std::endl;
	this->setRawBits(roundf(value * (1 << fractionalBits)));
}

//overload of the assignation operator
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->fixedPointNumber = src.getRawBits();
	return (*this);
}

//returns the value of the fixed point value
int Fixed::getRawBits(void) const
{
	return (this->fixedPointNumber);
}

//sets the raw value of the fixed point number
void Fixed::setRawBits(int const raw)
{
	this->fixedPointNumber = raw;
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() >> fractionalBits);
}

float Fixed::toFloat(void) const
{
	return (this->getRawBits() / (1 << fractionalBits));
}

std::ostream &operator<<(std::ostream &objstream, const Fixed &fixed)
{
	objstream << fixed.toFloat();
	return (objstream);
}
