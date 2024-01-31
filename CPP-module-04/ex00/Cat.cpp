#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "cat constructor called." << std::endl;
}

Cat::Cat(const Cat &var) : Animal(var) // linux
{
	*this = var;
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