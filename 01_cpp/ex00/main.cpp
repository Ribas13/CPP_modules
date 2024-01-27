/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:09:09 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/22 16:37:33 by diosanto         ###   ########.fr       */
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