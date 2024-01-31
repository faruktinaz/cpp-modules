#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal consturctor worked." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor worked." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &var)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = var;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &var)
{
    std::cout << "WrongAnimal Assignment Operator Overload called" << std::endl;
	this->type = var.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}