#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "default";
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm target constructor called." << std::endl;
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm(cpy)
{
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	*this = cpy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	std::cout << "RobotomyRequestForm copy assignement operator called" << std::endl;
	this->_target = obj._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &bure) const
{
	this->AForm::execute(bure);
	srand(time(0));
	if (rand() % 2 == 0)
		std::cout << "noises..." << this->_target << " has been robotizmed succesfuly" << std::endl;
	else
		std::cout << this->_target << " robotomy failed" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
}