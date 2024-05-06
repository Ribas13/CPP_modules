#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("NoTarget") {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src._target) {

}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	AForm::operator=(src);
	_target = src._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!getSigned() || executor.getGrade() > getGradeToExecute()) {
		throw GradeTooLowException();
		return ;
	}
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
	return _target;
}