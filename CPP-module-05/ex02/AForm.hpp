#ifndef AFORM_HPP
#define AFORM_HPP

# include "Bureaucrat.hpp"

# include <iostream>
# include <stdexcept>

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
public:
	AForm();
	AForm(const AForm& cpy);
	AForm(std::string name, int gradeToSign, int gradeToExecute);
	AForm &operator=(const AForm &cpy);

	const std::string getName(void) const;
	bool getSignState(void) const;
	virtual void execute(Bureaucrat const &executor) const  = 0;
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
	class notSignedException : public std::exception
	{
		public:
            const char* what() const throw();
    };
	~AForm();
};

std::ostream &operator<<(std::ostream &stream, AForm &AForm);

#endif