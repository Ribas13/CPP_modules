#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) {
	
	/* {	
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
	} */
	{
		try {
			std::cout << "------------------------\nFirst test - Wrong form name\n------------------------" << std::endl;
			Intern someRandomIntern;
			Bureaucrat diogo("diogo", 1);
			AForm *form;

			form = someRandomIntern.makeForm("rotomy request", "Bender");
			diogo.signForm(*form);
			diogo.executeForm(*form);
		}
		catch (std::exception &e) {
			std::cerr << "Caught an exception: " << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << "------------------------\nSecond test - Correct form name\n------------------------" << std::endl;
			Intern someRandomIntern;
			Bureaucrat diogo("diogo", 1);
			AForm *form;

			form = someRandomIntern.makeForm("robotomy request", "Bender");
			diogo.signForm(*form);
			diogo.executeForm(*form);
		}
		catch (std::exception &e) {
			std::cerr << "Caught an exception: " << e.what() << std::endl;
		}
	}
	return 0;
}