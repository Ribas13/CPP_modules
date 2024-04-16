/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:10 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/16 22:43:01 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(5.05f);
	
	std::cout << "Math: 5.05f . 2 = " << 5.05 * 2 << std::endl;
	std::cout << "C is: " << c << std::endl;
	std::cout << "B is: " << b << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "A: ";
	std::cout << a << std::endl;
	std::cout << "B: ";
	std::cout << b << std::endl;
	std::cout << "Biggest is: ";
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "Smallest is: ";
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}