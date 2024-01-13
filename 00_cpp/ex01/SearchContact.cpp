#include "PhoneBookUtils.hpp"
#include "Contact.hpp"

void	put_spaces(std::string &str)
{
	int	i;

	i = 0;
	while (i < 10 - str.length())
	{
		std::cout << " ";
		i++;
	}
}

std::string	itostr(int i)
{
	std::string	str;

	str = std::to_string(i);
	return (str);
}

void	display_contact(Contact &contact)
{
	std::string	index_p;

	index_p = itostr(contact.i);
	if (index_p.length() > 10)
		std::cout << (index_p.substr(0, 9) + ".|");
	else
	{
		put_spaces(index_p);
		std::cout << index_p << "|";
	}
	if (contact.first_name.length() > 10)
		std::cout << (contact.first_name.substr(0, 9) + ".|");
	else
	{
		put_spaces(contact.first_name);
		std::cout << contact.first_name << "|";
	}
	//print last_name
	if (contact.last_name.length() > 10)
		std::cout << (contact.last_name.substr(0, 9) + ".|");
	else
	{
		put_spaces(contact.last_name);
		std::cout << contact.last_name << "|";
	}
	//print nickname
	if (contact.nickname.length() > 10)
		std::cout << (contact.nickname.substr(0, 9) + ".|");
	else
	{
		put_spaces(contact.nickname);
		std::cout << contact.nickname << "|";
	}
	std::cout << std::endl;
}

void	PhoneBook::SearchContact()
{
	std::string	target;
	int			index;

	std::cout << "Enter contact to look for: ";
	std::cin >> target;
	index = stoi(target);
	if ((index <= 7 && index >= 0) && contacts[index].first_name != "")
	{
		display_contact(contacts[index]);
	}
	else
		std::cout << "That index is empty" << std::endl;
	return ;
}