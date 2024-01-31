#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "cat constructor called." << std::endl;
}

Cat::Cat(const Cat &var) : Animal(var) // linux
{
	*this = var;
	this->brain = new Brain(*var.brain);
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &var)
{
	this->type = var.type;
	std::cout << "Cat assignment operator overload called." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIYAW MIYAW" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}