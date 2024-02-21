#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
{
	std::cout << "default constructor called." << std::endl;
	throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "name-grade constructor called." << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name)
{
	std::cout << "copy constructor called." << std::endl;
	*this = cpy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &cpy)
{
	std::cout << "copy assignment operator called." << std::endl;
	this->_grade = cpy._grade;
	return *this;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;	
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &bure)
{
	return (output << bure.getName() << ", bureaucrat grade " << bure.getGrade()) << std::endl;
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because grade too low" << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

void	Bureaucrat::executeForm(AForm const &aform) const
{
	try
	{
		aform.execute(*this);
		std::cout << _name << " executed " << aform.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " cannot execute " << aform.getName() << " because " << e.what() << std::endl;
	}
	return;
}