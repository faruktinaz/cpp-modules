#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called." << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &var)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = var;
}

Animal &Animal::operator=(const Animal &var)
{
	std::cout << "Animal assignment operator overload called." << std::endl;
	this->type = var.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}