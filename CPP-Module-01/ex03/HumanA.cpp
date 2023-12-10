#include"HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << club.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &club) : club(club)
{
	std::cout << "humanA constructor worked." << std::endl;
	this->name = name;
}

HumanA::~HumanA()
{
	std::cout << "humanA destroyed." << std::endl;
}