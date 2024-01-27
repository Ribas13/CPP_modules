/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:39:51 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/22 16:55:16 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde = zombieHorde(5, "Horde");

	for (int i  = 0; i < 5; i++)
	{
		//std::cout << "[" << i << "]";
		horde[i].announce();
	}
	delete[] horde;
}