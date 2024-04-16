/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:14 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/13 16:32:09 by diosanto         ###   ########.fr       */
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
		Fixed(void); //constructor
		~Fixed(void); //destructor
		Fixed(const Fixed &src); //copy constructor
		Fixed &operator=(const Fixed &src); //copy assignment operator
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif