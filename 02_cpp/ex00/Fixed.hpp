/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:14 by diosanto          #+#    #+#             */
/*   Updated: 2024/02/07 11:38:25 by diosanto         ###   ########.fr       */
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
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif