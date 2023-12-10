#include"HumanB.hpp"

void HumanB::attack()
{
	if (haveWeapon == true)
		std::cout << name << " attacks with their " << club->getType() << std::endl;
	else
		std::cout << name << " does not have a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &club)
{
	this->club = &club;
	haveWeapon = true;
}

HumanB::HumanB(std::string name) : club(NULL)
{
	std::cout << "humanB constructor worked." << std::endl;
	this->haveWeapon = false;
	this->name = name;
}

HumanB::~HumanB()
{
	std::cout << "humanB destroyed." << std::endl;
}