#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <iostream>
# include <stdexcept> // !

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &other);
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	void    signForm(class AForm &form);
	void    incrementGrade();
    void    decrementGrade();
	int		getGrade() const;
	Bureaucrat &operator=(Bureaucrat const &other);
	std::string const getName() const;
	void executeForm(AForm const &form) const;
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &bure);

#endif