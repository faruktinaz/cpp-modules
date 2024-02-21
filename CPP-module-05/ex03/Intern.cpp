#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = cpy;
}

Intern &Intern::operator=(Intern const &src)
{
	(void)src;
	std::cout << "Intern Copy Assignment operator called" << std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

const char *Intern::UnknownType::what() const throw()
{
	return "Error: Unknown Type Exeption";
}

AForm *Intern::makeForm(std::string name, std::string target) const
{
	AForm *form;
	int checkNames[3] = {name.compare("shrubbery creation"), name.compare("robotomy request"), name.compare("presidential pardon")};
	int index = -1;

	for (int i = 0; i < 3; i++)
		if (checkNames[i] == 0)
			index = i;

	switch (index) {
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::UnknownType();
			break;
	}
	return form;
}