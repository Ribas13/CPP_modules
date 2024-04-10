/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:09:09 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/09 11:56:05 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie("Foo");
	Zombie	*zombie2;

	zombie.announce();
	zombie2 = newZombie("ALOHA");
	zombie2->announce();
	randomChump("Aleatorio");
	delete zombie2;
}