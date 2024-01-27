/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:39:19 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/21 19:43:21 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	only_space(std::string str)
{
	int size = str.size();
	for (int i = 0; i < size; i++)
	{
		if (!std::isspace(str[i]))
			return (0);
	}
	return (1);
}

std::string	read_input(std::string input)
{
	std::string	line;

	std::cout << input;
	std::getline(std::cin, line);
	while (line.empty() || only_space(line))
	{
		std::cout << "Input can't be empty!" << std::endl;
		std::cout << input;
		std::getline(std::cin, line);
	}
	return (line);
}

int	ft_strcmp(const std::string str1, const std::string str2)
{
	int len1 = str1.length();
	int len2 = str2.length();
	int minlen = std::min(len1, len2);

	for (int i = 0; i < minlen; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	if (len1 != len2)
		return (len1 - len2);
	return (0);
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	cmd;

	while (1)
	{
		cmd = read_input("Enter a cmd: ");
		if (!ft_strcmp(cmd, "ADD"))
			phoneBook.AddContact();
		else if (!ft_strcmp(cmd, "SEARCH"))
			phoneBook.SearchContact();
		else if (!ft_strcmp(cmd, "EXIT"))
			break ;
		else
			std::cout << "command not found" << std::endl;
	}
}
