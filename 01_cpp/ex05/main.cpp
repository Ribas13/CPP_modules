/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:10:00 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/10 15:25:50 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::string arr[4];

	arr[0] = "debug";
	arr[1] = "info";
	arr[2] = "warning";
	arr[3] = "error";
	
	for (int i = 0; i < 4; i++)
	{
		harl.complain(arr[i]);
		std::cout << std::endl;
	}
	return (0);
}
