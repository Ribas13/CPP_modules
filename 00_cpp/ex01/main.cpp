/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:39:19 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/08 16:52:11 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	only_space(std::string str) {
	int size = str.size();
	for (int i = 0; i < size; i++)
	{
		if (!std::isspace(str[i]))
			return (0);
	}
	return (1);
}

std::string	read_input(std::string input) {
	std::string	line;

	std::cout << input;
	std::getline(std::cin, line);
	while (line.empty() || only_space(line))
	{
		std::cout << "Input can't be empty!" << std::endl;
		std::cout << input;
		std::getline(std::cin, line);
		if (!std::getline(std::cin, line)) {
			std::cout << std::endl << "EOF detected, ending program" << std::endl;
			exit(0);
		}
	}
	return (line);
}

int	main(void) {
	PhoneBook	phoneBook;
	std::string	cmd;
	int			index;

	while (1) {
		cmd = read_input("Enter a cmd: ");
		if (cmd == "ADD")
			phoneBook.AddContact();
		else if (cmd == "SEARCH")
		{
			phoneBook.SearchContact();
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "command not found" << std::endl;
	}
}
