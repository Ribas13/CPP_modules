/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:05:16 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/21 19:38:31 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::shiftDown()
{
	for (int i = 7; i > 0; i--)
	{
		this->Contacts[i] = this->Contacts[i - 1];
		this->Contacts[i].setIndex(i + 1);
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
	this->Contacts[0].CreateContact(1, first, last, nickname, number, secret);
}

void	PhoneBook::showSecret()
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
}

void	PhoneBook::SearchContact()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << this->Contacts[i].getIndex() << "|";
		if (this->Contacts[i].getFirstName().size() > 9)
			std::cout << this->Contacts[i].getFirstName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->Contacts[i].getFirstName() << "|";
		if (this->Contacts[i].getLastName().size() > 9)
			std::cout << this->Contacts[i].getLastName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->Contacts[i].getLastName() << "|";
		if (this->Contacts[i].getNickname().size() > 9)
			std::cout << this->Contacts[i].getNickname().substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << this->Contacts[i].getNickname() << std::endl;
	}
}
