#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("NoTarget") {
	std::cout << "ShrubberyCreationForm with no target constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm called with target: " << _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), _target(src._target) {

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
	AForm::operator=(src);
	_target = src._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!getSigned() || executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	//std::cout << "The name issss: " << getName() << std::endl;
	std::ofstream ofs((getTarget() + "_shrubbery").c_str());
	if (!ofs.is_open()) {
		std::cerr << "Error opening file" << std::endl;
		return ;
	}
	ofs << "	           \\/ |    |/" << std::endl;
	ofs << "        \\/ / \\||/  /_/___/_" << std::endl;
	ofs << "         \\/   |/ \\/" << std::endl;
	ofs << "    _\\__\\_\\   |  /_____/_" << std::endl;
	ofs << "           \\  | /          /" << std::endl;
	ofs << "  __ _-----`  |{,-----------~" << std::endl;
	ofs << "            \\ }{" << std::endl;
	ofs << "             }{{" << std::endl;
	ofs << "             }}{" << std::endl;
	ofs << "             {{}" << std::endl;
	ofs << "       , -=-~{ .-^- _" << std::endl;
	ofs << "             `}" << std::endl;
	ofs << "              {" << std::endl;
	ofs.close();
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}