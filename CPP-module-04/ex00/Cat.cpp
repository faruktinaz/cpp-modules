#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "cat constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &var) : Animal(var) // linux
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = var;
}

Cat &Cat::operator=(const Cat &var)
{
	std::cout << "Cat assignment operator overload called." << std::endl;
	this->type = var.type;
	return (*this);
}

Cat::~Cat()
{
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