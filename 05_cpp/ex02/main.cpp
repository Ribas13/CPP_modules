#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
	try {
		Bureaucrat diogo("diogo", 1);
		ShrubberyCreationForm shrubberyCreationForm("village");
		RobotomyRequestForm robotomyRequestForm("chatgpt");
		PresidentialPardonForm presidentialPardonForm("PintoDaCosta");

		diogo.signForm(shrubberyCreationForm);
		diogo.signForm(robotomyRequestForm);
		diogo.signForm(presidentialPardonForm);

		diogo.executeForm(shrubberyCreationForm);
		diogo.executeForm(robotomyRequestForm);
		diogo.executeForm(presidentialPardonForm);
		diogo.executeForm(robotomyRequestForm);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Caught GradeTooHigh exception: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "caught GradeTooLow exception: " << e.what() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "----------------------\nSecond test\n----------------------" << std::endl;
		Bureaucrat jose("jose", 150);
		ShrubberyCreationForm shrubberyCreationForm("village");

		jose.signForm(shrubberyCreationForm);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Caught GradeTooHigh exception: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cerr << "caught GradeTooLow exception: " << e.what() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	return 0;
}