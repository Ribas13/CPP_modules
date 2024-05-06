#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

class Intern {
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();
		Intern &operator=(Intern const &src);

		AForm *makeForm(const std::string form, const std::string target);

		//Error
		class FormNameDoesntExist : public std::exception {
			private:
				virtual const char *what() const throw();
		};
};

#endif