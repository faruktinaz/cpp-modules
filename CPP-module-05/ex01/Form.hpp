#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"
# include<iostream>
# include <stdexcept>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
public:
	Form();
	Form(const Form& cpy);
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form &operator=(const Form &cpy);

	const std::string getName(void) const;
	bool getSignState(void) const;
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;

	void beSigned(Bureaucrat &bv);

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	~Form();
};

std::ostream &operator<<(std::ostream &stream, Form &Form);

#endif