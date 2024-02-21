#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Intern
{

public:
	Intern();
	Intern(Intern const &cpy);
	AForm *makeForm(std::string name, std::string target) const;
	class UnknownType : public std::exception{
		const char *what() const throw();
	};
	Intern &operator=(Intern const &src);
	~Intern();
};

#endif