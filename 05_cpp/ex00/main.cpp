#include "Bureaucrat.hpp"

int main(void) {
	{
		try {
			Bureaucrat diogo("Diogo", 1);
			std::cout << "Curr grade: " << diogo.getGrade() << std::endl; 
			diogo.decrementGrade();
			std::cout << "Curr grade: " << diogo.getGrade() << std::endl;
			diogo.incrementGrade();
			std::cout << "Curr grade: " << diogo.getGrade() << std::endl;
			diogo.incrementGrade();
			std::cout << "Curr grade: " << diogo.getGrade() << std::endl;
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
	}
		{
			try {
			Bureaucrat joao("Joao", 150);
			std::cout << "Curr grade: " << joao.getGrade() << std::endl; 
			joao.incrementGrade();
			std::cout << "Curr grade: " << joao.getGrade() << std::endl;
			joao.decrementGrade();
			std::cout << "Curr grade: " << joao.getGrade() << std::endl;
			joao.decrementGrade();
			std::cout << "Curr grade: " << joao.getGrade() << std::endl;
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
	}
	return 0;
}