/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:14 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/30 14:42:42 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iomanip>
#include <iostream>

class Fixed
{
	private:
		int fixedPointNumber;
		static const int fractionalBits = 8;
	public:
		Fixed(void); //Initializes the fixed point number value to 0
		~Fixed(void); //destructor
		Fixed(const Fixed &src); //copy constructor
		//constructor that takes a constant integer as a parameter and that converts it to the corresponding fixed point value
		Fixed(const int value);
		Fixed &operator=(const Fixed &src); //overload of the assignation operator
		int getRawBits(void) const; //returns the value of the fixed point value
		void setRawBits(int const raw); //sets the raw value of the fixed point number
};

#endif