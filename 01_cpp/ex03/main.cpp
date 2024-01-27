/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:31:44 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/27 22:24:05 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	{
		Weapon pistol = Weapon("pistol");

		HumanA bob("Bob", pistol);
		bob.attack();
		pistol.setType("revolver");
		bob.attack();
	}
	{
		//Weapon icecream = Weapon("icecream");

		HumanB jonny("Jonny");
		//jonny.setWeapon(icecream);
		jonny.attack();
		//icecream.setType("popsicle");
		jonny.attack();
	}
}