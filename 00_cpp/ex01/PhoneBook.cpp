/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:05:16 by diosanto          #+#    #+#             */
/*   Updated: 2024/03/22 13:40:29 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->size = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::shiftDown()
{
	for (int i = 7; i > 0; i--)
	{
		this->Contacts[i] = this->Contacts[i - 1];
		this->Contacts[i].setIndex(i);
	}
}

void	PhoneBook::AddContact()
{
	std::string	first = read_input("Enter first name: ");
	std::string	last = read_input("Enter last name: ");
	std::string	nickname = read_input("Enter nickname: ");
	std::string	number = read_input("Enter phone number: ");
	std::string	secret = read_input("Enter darkest secret: ");
	this->shiftDown();
	this->Contacts[0].CreateContact(0, first, last, nickname, number, secret);
	if (this->size < 8)
	{
		this->size += 1;
	}
}

/* void	PhoneBook::showSecret()
{
	std::string	line;
	int			i;

	while (1)
	{
		line = read_input("Enter index to see details or press 'Q' to leave: ");
		if (line[0] == 'Q' && line.size() == 1)
			return ;
		else if (line.size() == 1 && line[0] >= '1' && line[0] <= '8')
		{
			i = line[0] - 49;
			if (!this->Contacts[i].getFirstName().empty())
				this->Contacts[i].DisplayContact();
			else
				std::cout << "Contact Empty!" << std::endl;
		}
		else
			std::cout << "Not a valid index" << std::endl;
	}
} */

int		PhoneBook::get_size()
{
	return (this->size);
}

//must be from '0' to '9'
//
void	PhoneBook::SearchContact(std::string index)
{
	int	index2;
	index2 = index[0] - 48;
	if (index.size() > 1 || index[0] < '0' || index[0] > '8' || index2 > 7 || index2 < 0)
	{
		std::cout << "Index must be from 0 to 7" << std::endl;
		return ;
	}
	if (index2 >= get_size())
	{
		std::cout << "No contact for that index" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << this->Contacts[index2].getIndex() << "|";
	if (this->Contacts[index2].getFirstName().size() > 9)
		std::cout << this->Contacts[index2].getFirstName().substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->Contacts[index2].getFirstName() << "|";
	if (this->Contacts[index2].getLastName().size() > 9)
		std::cout << this->Contacts[index2].getLastName().substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->Contacts[index2].getLastName() << "|";
	if (this->Contacts[index2].getNickname().size() > 9)
		std::cout << this->Contacts[index2].getNickname().substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setw(10) << this->Contacts[index2].getNickname() << std::endl;
}
