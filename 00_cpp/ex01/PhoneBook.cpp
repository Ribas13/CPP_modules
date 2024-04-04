/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:05:16 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/04 19:12:23 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->size = 0;
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::shiftDown() {
	for (int i = 7; i > 0; i--)
	{
		this->Contacts[i] = this->Contacts[i - 1];
		this->Contacts[i].setIndex(i);
	}
}

void	PhoneBook::AddContact() {
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

int		PhoneBook::get_size() {
	return (this->size);
}

void	PhoneBook::lookup_contact(std::string index) {
	try {
		int i = std::stoi(index);
		if (i < 0 || i >= get_size()) {
			std::cout << "Index must be between 0 and " << get_size() - 1 << std::endl;
			lookup_contact(read_input("Enter search index: "));
		}
		this->Contacts[i].DisplayContact();
	} catch (std::invalid_argument &e) {
		std::cout << "Invalid index (must be a digit)" << std::endl;
		lookup_contact(read_input("Enter search index: "));
		return ;
	}
}

//must be from '0' to '9'
//
void	PhoneBook::SearchContact() {
	if (get_size() == 0)
	{
		std::cout << "There are no contacts in the phonebook" << std::endl;
		return ;
	}
	for (int i = 0; i < get_size(); i++){
		std::cout << std::setw(10) << this->Contacts[i].getIndex() << "|";
		if (this->Contacts[i].getFirstName().size() > 9)
	        std::cout << this->Contacts[i].getFirstName().substr(0,9) << "."<< "|";
	    else
	        std::cout << std::setw(10) << this->Contacts[i].getFirstName() << "|";
	    if (this->Contacts[i].getLastName().size() > 9)
	        std::cout << this->Contacts[i].getLastName().substr(0,9) << "."<< "|";
	    else
	        std::cout << std::setw(10) << this->Contacts[i].getLastName() << "|";
	    if (this->Contacts[i].getNickname().size() > 9)
	        std::cout << this->Contacts[i].getNickname().substr(0,9) << "."<< std::endl;
	    else
	        std::cout << std::setw(10) << this->Contacts[i].getNickname() << std::endl;
	}
	lookup_contact(read_input("Enter search index: "));
}
