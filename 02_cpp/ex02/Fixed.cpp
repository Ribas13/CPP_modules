/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:18 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/16 22:57:12 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

//Int constructor
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value << fractionalBits);
}

//Float constructor
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(value * (1 << fractionalBits)));
}

//overload of the assignation operator
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return (*this);
}

//returns the value of the fixed point value
int Fixed::getRawBits(void) const {
	return this->fixedPointNumber;
}

//sets the raw value of the fixed point number
void Fixed::setRawBits(int const raw) {
	this->fixedPointNumber = raw;
}

int Fixed::toInt(void) const {
	return this->getRawBits() >> fractionalBits;
}

float Fixed::toFloat(void) const {
	return (float)this->getRawBits() / (1 << fractionalBits);
}

std::ostream &operator<<(std::ostream &objstream, const Fixed &fixed) {
	objstream << fixed.toFloat();
	return objstream;
}

bool Fixed::operator<(const Fixed &fixed) const {
	return this->fixedPointNumber < fixed.getRawBits();
}

bool Fixed::operator>(const Fixed &fixed) const {
	return this->fixedPointNumber > fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const {
	return this->fixedPointNumber == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return this->fixedPointNumber != fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return this->fixedPointNumber <= fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return this->fixedPointNumber >= fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	return this->fixedPointNumber + fixed.getRawBits();
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return this->fixedPointNumber - fixed.getRawBits();
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return this->fixedPointNumber * fixed.getRawBits();
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	return this->fixedPointNumber / fixed.getRawBits();
}

Fixed &Fixed::operator++(void) {
	this->fixedPointNumber++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->fixedPointNumber++;
	return tmp;
}

Fixed &Fixed::operator--(void) {
	this->fixedPointNumber--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->fixedPointNumber--;
	return tmp;
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2) {
	if (num1.getRawBits() < num2.getRawBits())
		return num1;
	return num2;
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2) {
	if (num1.getRawBits() < num2.getRawBits())
		return num1;
	return num2;
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2) {
	if (num1.getRawBits() > num2.getRawBits())
		return num1;
	return num2;
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2) {
	if (num1.getRawBits() > num2.getRawBits())
		return num1;
	return num2;
}