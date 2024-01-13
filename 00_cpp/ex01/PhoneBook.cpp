#include "PhoneBookUtils.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstdlib>


int	main(void)
{
	std::string	cmd;
	PhoneBook	phone_book;

	std::cout << "Welcome to your phonebook!" << std::endl;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> cmd;

		if (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT")
		{
			if (cmd == "ADD")
				phone_book.AddContact();
			else if (cmd == "SEARCH")
				phone_book.SearchContact();
			else if (cmd == "EXIT")
				break ;
		}
		else 
			std::cout << "\"" << cmd << "\" is not a valid command" << std::endl;
	}
	std::cout << "Goodbye!" << std::endl;
	return (0);
}
