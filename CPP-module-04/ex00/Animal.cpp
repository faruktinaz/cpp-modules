#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &var)
{
	*this = var;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &var)
{
	this->type = var.type;
	std::cout << "Animal assignment operator overload called." << std::endl;
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