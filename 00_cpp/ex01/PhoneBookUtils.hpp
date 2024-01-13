#ifndef PHONEBOOKUTILS_HPP
# define PHONEBOOKUTILS_HPP

#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	AddContact(void);
		void	SearchContact(void);
};

#endif