#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor worked." << std::endl;
	name = "Undefined";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default ClapTrap constructor worked with name." << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy ClapTrap constructor worked." << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor worked, " << this->name << " is destroyed." << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0){
		--this->energyPoints;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		if (energyPoints == 0)
			std::cout << "ClapTrap " << name << " has no energy points for attack!" << std::endl;
	}
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
	if (this->energyPoints > 0 && this->hitPoints > 0){
		if (this->hitPoints < amount){
			this->hitPoints = 0;
			std::cout <<  this->name << " died" << std::endl;
		}
		else{
			this->hitPoints -= amount;
			std::cout << name << ", " << amount << " damaged, some of the parts are broken" << std::endl;
		}
	}
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0){
		this->hitPoints += amount;
		--this->energyPoints;
		std::cout << this->name << " repaired " << amount << std::endl;
	}
	else
	{
		if (energyPoints == 0)
			std::cout << this->name << "has no energy"<< std::endl;
	}
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
