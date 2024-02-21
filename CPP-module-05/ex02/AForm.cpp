#include"AForm.hpp"

const std::string AForm::getName() const
{
	return this->_name;
};

AForm::AForm() : _name(""), isSigned(false), gradeToSign(0), gradeToExecute(0)
{
	std::cout << this->_name << " AForm Default constructor called" << std::endl;
	isSigned = false;
	throw AForm::GradeTooHighException();
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << this->_name << " AForm  constructor called" << std::endl;
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
};

void AForm::execute(Bureaucrat const & executor) const
{
    if (!(this->isSigned))
        throw (notSignedException());
    if (this->gradeToExecute < executor.getGrade())
        throw (GradeTooLowException());
}

AForm::AForm(const AForm& cpy) : _name(cpy._name), gradeToSign(cpy.gradeToSign), gradeToExecute(cpy.gradeToExecute)
{
	std::cout << this->_name << " AForm Copy constructor called" << std::endl;
	*this = cpy;
};

AForm &AForm::operator=(const AForm &cpy)
{
	std::cout << this->_name << " AForm Assignation operator called" << std::endl;
	if (this != &cpy)
	{
		this->isSigned = cpy.isSigned;
	}
	return *this;
};

AForm::~AForm()
{
	std::cout << this->_name << " AForm Destructor called" << std::endl;
};

bool AForm::getSignState() const
{
	return this->isSigned;
};

int AForm::getGradeToSign() const
{
	return this->gradeToSign;
};

int AForm::getGradeToExecute() const
{
	return this->gradeToExecute;
};

void AForm::beSigned(Bureaucrat &bv)
{
	if (bv.getGrade() > this->gradeToSign)
		throw AForm::GradeTooLowException();
	this->isSigned = true;
	std::cout << "signed" << std::endl;
};

const char* AForm::GradeTooHighException::what() const throw()
{
	return "AForm Grade is too high";
};

const char* AForm::GradeTooLowException::what() const throw()
{
	return "AForm Grade is too low";
};

const char* AForm::notSignedException::what() const throw()
{
	return "Form not signed";
}

std::ostream &operator<<(std::ostream &stream, AForm &AForm)
{
	stream << "AForm " << AForm.getName() << " is " << (AForm.getSignState() ? "signed" : "couldn't signed") << " and requires grade " << AForm.getGradeToSign() << " to sign and grade " << AForm.getGradeToExecute() << " to execute" << std::endl;
	return stream;
};

