#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "default";
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm target constructor called." << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm(cpy)
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	*this = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	std::cout << "ShrubberyCreationForm copy assignement operator called" << std::endl;
	this->_target = obj._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &bure) const
{
	this->AForm::execute(bure);
	std::ofstream ofs((this->_target + "_shrubbery").c_str());
    ofs << "       _-_\n"
			"    /~~   ~~\\\n"
			" /~~         ~~\\\n"
			"{               }\n"
			" \\  _-     -_  /\n"
			"   ~  \\\\ //  ~\n"
			"_- -   | | _- _\n"
			"  _ -  | |   -_\n"
			"      // \\\\"
	<< std::endl;
    ofs.close();
	std::cout << this->_target << " has been created." << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}