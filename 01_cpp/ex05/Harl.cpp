/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:09:28 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/30 13:27:40 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	//init a list with pointer to functions
	list[0].complain = "debug";
	list[0].ptr = &Harl::debug;
	list[1].complain = "info";
	list[1].ptr = &Harl::info;
	list[2].complain = "warning";
	list[2].ptr = &Harl::warning;
	list[3].complain = "error";
	list[3].ptr = &Harl::error;
}

Harl::~Harl(void)
{

}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (list[i].complain == level)
		{
			(this->*list[i].ptr)();
			return ;
		}
	}
	std::cout << "No such complain level" << std::endl;
}