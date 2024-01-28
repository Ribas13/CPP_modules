/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 22:28:58 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/27 23:05:39 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	replace_text(std::string filename, std::string s1, std::string s2)
{
	std::ifstream file(filename);
	std::string line;
	
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	std::ofstream newfile(filename + "_replaced");
	if (!newfile)
	{
		std::cout << "Error creating new file" << std::endl;
		return (1);
	}
	while (std::getline(file, line))
	{
		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] == s1[0])
			{
				int j = 0;
				while (line[i + j] == s1[j])
				{
					j++;
					if (j == s1.length())
					{
						newfile << s2;
						i += j;
						j = 0;
					}
				}
			}
			newfile << line[i];
		}
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
