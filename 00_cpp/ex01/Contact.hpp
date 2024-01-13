#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>


class	Contact
{
	private:

	public:
		Contact(void);
		~Contact(void);
		int			i;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
};

#endif