#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(Intern const &src) {
	std::cout << "Intern copy constructor" << std::endl;
	*this = src;
}

Intern::~Intern() {
	std::cout << "Intern destructor" << std::endl;
}

Intern & Intern::operator=(Intern const &src) {
	std::cout << "Intern assignment operator" << std::endl;
	(void)src;
	return *this;
}

AForm *makePresident(const std::string target) {
	return (new PresidentialPardonForm(target));
}

AForm *makeRobotomy(const std::string target) {
	return (new RobotomyRequestForm(target));
}

AForm *makeShrubbery(const std::string target) {
	return (new ShrubberyCreationForm(target));
}

const char *Intern::FormNameDoesntExist::what() const throw() {
	return ("Form name doesn't exist");
}

AForm *Intern::makeForm(const std::string form, const std::string target) {
	AForm *res = NULL;
	int i = 0;
	std::string formTypes[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	while (i < 3 && formTypes[i].compare(form)) {
		i++;
	}
	switch (i + 1) {
		case 1:
			std::cout << "Intern creates Shrubbery Creation Form" << std::endl;
			res = new ShrubberyCreationForm(target);
			break;
		case 2:
			std::cout << "Intern creates Robotomy Request Form" << std::endl;
			res = new RobotomyRequestForm(target);
			break;
		case 3:
			std::cout << "Intern creates Presidential Pardon Form" << std::endl;
			res = new PresidentialPardonForm(target);
			break ;
		default:
			throw FormNameDoesntExist();
	}
	return (res);
}