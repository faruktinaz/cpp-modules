#include"Form.hpp"

const std::string Form::getName() const
{
	return this->_name;
};

Form::Form() : _name(""), isSigned(false), gradeToSign(0), gradeToExecute(0)
{
	std::cout << this->_name << " Form Default constructor called" << std::endl;
	throw Form::GradeTooHighException();
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << this->_name << " Form  constructor called" << std::endl;
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
};


Form::Form(const Form& cpy) : _name(cpy._name), gradeToSign(cpy.gradeToSign), gradeToExecute(cpy.gradeToExecute)
{
	std::cout << this->_name << " Form Copy constructor called" << std::endl;
	*this = cpy;
};

Form &Form::operator=(const Form &cpy)
{
	std::cout << this->_name << " Form Assignation operator called" << std::endl;
	if (this != &cpy)
	{
		this->isSigned = cpy.isSigned;
	}
	return *this;
};

Form::~Form()
{
	std::cout << this->_name << " Form Destructor called" << std::endl;
};

bool Form::getSignState() const
{
	return this->isSigned;
};

int Form::getGradeToSign() const
{
	return this->gradeToSign;
};

int Form::getGradeToExecute() const
{
	return this->gradeToExecute;
};

void Form::beSigned(Bureaucrat &bv)
{
	if (bv.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	this->isSigned = true;
};

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form Grade is too high";
};

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form Grade is too low";
};

std::ostream &operator<<(std::ostream &stream, Form &Form)
{
	stream << "Form " << Form.getName() << " is " << (Form.getSignState() ? "signed" : "couldn't signed") << " and requires grade " << Form.getGradeToSign() << " to sign and grade " << Form.getGradeToExecute() << " to execute";
	return stream;
};

