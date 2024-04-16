/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:14 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/16 18:00:56 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixedPointNumber;
		static const int fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed &operator=(const Fixed &src);
		Fixed(const int value);
		Fixed(const float value);
		
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
		Fixed &operator=(const Fixed &fixed) const;

		bool operator<(const Fixed &fixed) const;
		bool operator>(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;

		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		static Fixed& min(Fixed &num1, Fixed &num2);
		static const Fixed& min(const Fixed &num1, const Fixed &num2);
		static Fixed& max(Fixed &num1, Fixed &num2);
		static const Fixed& max(const Fixed &num1, const Fixed &num2);
};

std::ostream &operator<<(std::ostream &objsstream, const Fixed &fixed);

#endif