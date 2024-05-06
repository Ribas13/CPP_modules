#include "RobotomyRequestForm.hpp"


//work some way to have the robotomy work 50% of the time
int RobotomyRequestForm::result = 0;

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("NoTarget") {
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target) {

}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	AForm::operator=(src);
	_target = src._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!getSigned() || executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	std::cout << "Drilling noises... ... ..." << std::endl;
	//add 50% logic here
	std::string options[2] = {" has been robotomized.", "'s robotomy has failed."};
	std::cout<< _target << options[result++ % 2] << std::endl;
}

std::string RobotomyRequestForm::getTarget() const {
	return _target;
}