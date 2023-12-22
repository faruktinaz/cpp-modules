#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor worked." << std::endl;
	name = "null";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor worked with name." << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor worked." << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor worked, " << this->name << " is destroyed." << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points for attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &var) {
	std::cout << "Operator Overlaod worked." << std::endl;
	this->name = var.name;
	this->hitPoints = var.hitPoints;
	this->energyPoints = var.energyPoints;
	this->attackDamage = var.attackDamage;
	return (*this);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage." << std::endl;
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is died." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points for repair!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " be repaired for " << amount << " points" << std::endl;
	hitPoints += amount;
	energyPoints--;
}

std::string ClapTrap::getName()
{
	return (name);
}

unsigned int ClapTrap::getAttackDamage()
{
	return (attackDamage);
}

unsigned int ClapTrap::getHitPoints()
{
	return (hitPoints);
}

unsigned int ClapTrap::getEnergyPoints()
{
	return (energyPoints);
}
