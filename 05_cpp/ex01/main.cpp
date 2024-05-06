#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	std::cout << "----------------------------" << std::endl; 
	{
		try {
			std::cout << "\t<Bureaucrat grade too low test>" << std::endl << std::endl;
			Bureaucrat diogo("Diogo", 151);
			std::cout << diogo << std::endl;
			Form formA("formA", 1, 1);
			std::cout << formA << std::endl;
			diogo.signForm(formA);
		}
		catch (Bureaucrat::GradeTooHighException &exception) {
			std::cerr << "Caught GradeTooHighException: " << exception.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &exception) {
			std::cerr << "Caught GradeTooLowException: " << exception.what() << std::endl;
		}
		catch (std::exception &exception) {
			std::cerr << "Caught exception: " << exception.what() << std::endl;
		}
		std::cout << "----------------------------" << std::endl;
	}
	{
		try {
			std::cout << "\t<Bureaucrat grade too high test>" << std::endl << std::endl;
			Bureaucrat diogo("Diogo", -1);
			std::cout << diogo << std::endl;
			Form formA("formA", 1, 1);
			std::cout << formA << std::endl;
			diogo.signForm(formA);
		}
		catch (Bureaucrat::GradeTooHighException &exception) {
			std::cerr << "Caught GradeTooHighException: " << exception.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &exception) {
			std::cerr << "Caught GradeTooLowException: " << exception.what() << std::endl;
		}
		catch (std::exception &exception) {
			std::cerr << "Caught exception: " << exception.what() << std::endl;
		}
		std::cout << "----------------------------" << std::endl;
	}
	{
		try {
			std::cout << "\t<Buraucrat grade too low to sign form test>" << std::endl << std::endl;
			Bureaucrat diogo("Diogo", 2);
			std::cout << diogo << std::endl;
			Form formA("formA", 1, 1);
			std::cout << formA << std::endl;
			diogo.signForm(formA);
		}
		catch (Bureaucrat::GradeTooHighException &exception) {
			std::cerr << "Caught GradeTooHighException: " << exception.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &exception) {
			std::cerr << "Caught GradeTooLowException: " << exception.what() << std::endl;
		}
		catch (std::exception &exception) {
			std::cerr << "Caught exception: " << exception.what() << std::endl;
		}
		std::cout << "----------------------------" << std::endl;
	}
	{
		try {
			std::cout << "\t<Form grade too high test>" << std::endl << std::endl;
			Bureaucrat diogo("Diogo", 2);
			std::cout << diogo << std::endl;
			Form formA("formA", 0, 1);
			std::cout << formA << std::endl;
			diogo.signForm(formA);
		}
		catch (Bureaucrat::GradeTooHighException &exception) {
			std::cerr << "Caught GradeTooHighException: " << exception.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &exception) {
			std::cerr << "Caught GradeTooLowException: " << exception.what() << std::endl;
		}
		catch (std::exception &exception) {
			std::cerr << "Caught exception: " << exception.what() << std::endl;
		}
		std::cout << "----------------------------" << std::endl;
	}
	{
		try {
			std::cout << "\t<Form grade too low test>" << std::endl << std::endl;
			Bureaucrat diogo("Diogo", 2);
			std::cout << diogo << std::endl;
			Form formA("formA", 151, 1);
			std::cout << formA << std::endl;
			diogo.signForm(formA);
		}
		catch (Bureaucrat::GradeTooHighException &exception) {
			std::cerr << "Caught GradeTooHighException: " << exception.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &exception) {
			std::cerr << "Caught GradeTooLowException: " << exception.what() << std::endl;
		}
		catch (std::exception &exception) {
			std::cerr << "Caught exception: " << exception.what() << std::endl;
		}
		std::cout << "----------------------------" << std::endl;
	}
	return 0;
}