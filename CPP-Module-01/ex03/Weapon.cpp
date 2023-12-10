#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "weapon constructor worked." << std::endl;
	this->type = type;
}

Weapon::~Weapon()
{
	std::cout << "weapon destroyed." << std::endl;
}


