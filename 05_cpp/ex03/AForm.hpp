#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

//make it an abstract class
class AForm {
	private:
		const std::string 	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		//Constructors/destructors
		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & src);
		~AForm();
		AForm &operator=(AForm const &src);

		//Class functions
		std::string		getName() const;
		bool 			getSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExecute() const;
		void			beSigned(const Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		
		//exceptions
		class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, AForm &form);

#endif