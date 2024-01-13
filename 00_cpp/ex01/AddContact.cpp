#include "PhoneBookUtils.hpp"
#include "Contact.hpp"


void	get_first_name(Contact &contact)
{
	int i;
	std::cout << "Enter first name: ";
	std::cin >> contact.first_name;
	if (contact.first_name == "")
	{
		std::cout << "First name cannot be empty" << std::endl;
		get_first_name(contact);
	}
	else if (contact.first_name[0] == ' ')
	{
		i = 0;
		while (contact.first_name[i] == ' ')
			i++;
		while (contact.first_name[i] != '\0' || contact.first_name[i] != ' ')
		{
			contact.first_name[0] = contact.first_name[i];
			i++;
		}
		contact.first_name[i] = '\0';
	}
}

void	get_last_name(Contact &contact)
{
	int i;
	std::cout << "Enter last name: ";
	std::cin >> contact.last_name;
	if (contact.last_name == "")
	{
		std::cout << "Last name cannot be empty" << std::endl;
		get_last_name(contact);
	}
	else if (contact.last_name[0] == ' ')
	{
		i = 0;
		while (contact.last_name[i] == ' ')
			i++;
		while (contact.last_name[i] != '\0' || contact.last_name[i] != ' ')
		{
			contact.last_name[0] = contact.last_name[i];
			i++;
		}
		contact.last_name[i] = '\0';
	}
}

void	get_nickname(Contact &contact)
{
	int i;
	std::cout << "Enter nickname: ";
	std::cin >> contact.nickname;
	if (contact.nickname == "")
	{
		std::cout << "Nickname cannot be empty" << std::endl;
		get_nickname(contact);
	}
	else if (contact.nickname[0] == ' ')
	{
		i = 0;
		while (contact.nickname[i] == ' ')
			i++;
		while (contact.nickname[i] != '\0' || contact.nickname[i] != ' ')
		{
			contact.nickname[0] = contact.nickname[i];
			i++;
		}
		contact.nickname[i] = '\0';
	}
}

void	get_phone_number(Contact &contact)
{
	int i;
	std::string phone_number_local;

	std::cout << "Enter Phone Number: ";
	std::cin >> phone_number_local;
	if (phone_number_local == "")
	{
		std::cout << "Phone number cannot be empty" << std::endl;
		get_phone_number(contact);
		return ;
	}
	for (int i = 0; phone_number_local[i]; i++)
	{
		if (i > 8)
		{
			std::cout << "Phone number cannot be more than 9 digits" << std::endl;
			get_phone_number(contact);
			return ;
		}
		if (phone_number_local[i] < '0' || phone_number_local[i] > '9')
		{
			std::cout << "Phone number can only contain digits" << std::endl;
			get_phone_number(contact);
			return ;
		}
	}
	contact.phone_number = stoi(phone_number_local);
}

void	get_darkest_secret(Contact &contact)
{
	int i;
	std::cout << "Enter darkest secret: ";
	std::cin >> contact.darkest_secret;
	if (contact.darkest_secret == "")
	{
		std::cout << "Darkest secret cannot be empty" << std::endl;
		get_darkest_secret(contact);
	}
	else if (contact.darkest_secret[0] == ' ')
	{
		i = 0;
		while (contact.darkest_secret[i] == ' ')
			i++;
		while (contact.darkest_secret[i] != '\0' || contact.darkest_secret[i] != ' ')
		{
			contact.darkest_secret[0] = contact.darkest_secret[i];
			i++;
		}
		contact.darkest_secret[i] = '\0';
	}
}

void	PhoneBook::AddContact(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (this->contacts[i].first_name == "")
		{
			this->contacts[i].i = i;
			get_first_name(this->contacts[i]);
			get_last_name(this->contacts[i]);
			get_nickname(this->contacts[i]);
			get_phone_number(this->contacts[i]);
			get_darkest_secret(this->contacts[i]);
			std::cout << "Contact added" << std::endl;
			std::cout << "You have space for " << 7 - i << " contacts" << std::endl;
			return ;
		}
	}
	if (this->contacts[7].first_name != "")
	{
		std::cout << "PhoneBook is full" << std::endl;
		return ;
	}
	return ;
}
