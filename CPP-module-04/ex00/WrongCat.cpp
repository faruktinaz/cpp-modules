#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat consturcotr called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &var) : WrongAnimal(var)
{
	*this = var;
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &var) {
	this->type = var.type;
	std::cout << "WrongCat Assignment Operator Overload called." << std::endl;
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