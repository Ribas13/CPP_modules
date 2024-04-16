/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:49:10 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/17 00:01:31 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c ( Fixed (10.2f) / Fixed (2));
	Fixed const d ( Fixed (10.2f) + Fixed (2));
	Fixed const e ( Fixed (10.2f) - Fixed (2));

	std::cout << "a(expected: 0): " << a << std::endl;
	std::cout << "b(expected: 10.1): " << b << std::endl;
	std::cout << "c(expected: 5.1): " << c << std::endl;
	std::cout << "d(expected: 12.2): " << d << std::endl;
	std::cout << "e(expected: 8.2): " << e << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "A: " << ++a << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "A: " << a++ << std::endl;
	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}