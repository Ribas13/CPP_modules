/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:54:24 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/27 22:22:13 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
	std::cout << this->type << " destroyed" << std::endl;
}

const std::string	&Weapon::getType(void)
{
	std::string &ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}