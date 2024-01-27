/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:30:35 by diosanto          #+#    #+#             */
/*   Updated: 2024/01/21 19:41:26 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->index = 0;
}

Contact::~Contact()
{
}

void	Contact::setIndex(int i)
{
	this->index = i;
}

int		Contact::getIndex()
{
	return (this->index);
}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

void	Contact::CreateContact(int id, std::string first, std::string last, std::string nick, std::string number, std::string secret)
{
	this->index = id;
	this->firstName = first;
	this->lastName = last;
	this->nickname = nick;
	this->phoneNumber = number;
	this->darkestSecret = secret;
}

void	Contact::DisplayContact()
{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->darkestSecret << std::endl;
}