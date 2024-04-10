/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:28:58 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/09 15:05:46 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	replace_text(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename.c_str());
	std::string line;
	
	if (s1.empty() || s2.empty())
	{
		std::cout << "Empty arguments!" << std::endl;
		return (1);
	}
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	std::ofstream newfile((filename + ".replace").c_str());
	if (!newfile)
	{
		std::cout << "Error creating .replace file" << std::endl;
		return (1);
	}
	while (std::getline(file, line))
	{
		size_t	i = line.find(s1);
		while (i != std::string::npos)
		{
			line.erase(i, s1.length());
			line.insert(i, s2);
			i = line.find(s1, i + s2.length());
		}
		newfile << line;
		newfile << std::endl;
	}
	file.close();
	newfile.close();
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of args" << std::endl;
		std::cout << "./replace <filename> <str to replace> <str to replace with>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (replace_text(filename, s1, s2))
		return (1);
	return (0);
}
