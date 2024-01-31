#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &var) : Animal(var) // linux
{
	*this = var;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &var)
{
	this->type = var.type;
	std::cout << "Dog assignment operator overload called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "HAV HAV" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}