/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosanto <diosanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:06:10 by diosanto          #+#    #+#             */
/*   Updated: 2024/04/04 19:12:28 by diosanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

std::string read_input(std::string input);

class PhoneBook {
	private:
		Contact Contacts[8];
		void	shiftDown(void);
		void	showSecret(void);
		int		size;
		int		index;
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact();
		void	SearchContact();
		int		get_size();
		void	lookup_contact(std::string index);
};

#endif