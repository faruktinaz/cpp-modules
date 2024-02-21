#ifndef SHRUBBERYFORM_CLASS_H
# define SHRUBBERYFORM_CLASS_H
# include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const &bure) const;
		std::string getTarget() const;

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
};

#endif