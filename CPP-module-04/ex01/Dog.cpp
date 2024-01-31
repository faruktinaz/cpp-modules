#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &var) : Animal(var) // linux
{
	*this = var;
	this->brain = new Brain(*var.brain);
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