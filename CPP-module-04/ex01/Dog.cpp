#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &var) : Animal(var) // linux
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = var;
}

Dog &Dog::operator=(const Dog &var)
{
	std::cout << "Dog assignment operator overload called." << std::endl;
	this->type = var.type;
	this->brain = new Brain(*var.brain);
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
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