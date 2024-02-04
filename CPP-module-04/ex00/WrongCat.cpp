#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat consturcotr called." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &var) : WrongAnimal(var)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = var;
}

WrongCat &WrongCat::operator=(const WrongCat &var)
{
	std::cout << "WrongCat Assignment Operator Overload called." << std::endl;
	this->type = var.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WRONG MIYAW MIYAW" << std::endl;
}

std::string WrongCat::getType() const
{
	return (this->type);
}