#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor worked." << std::endl;
	energyPoints = 50;
	hitPoints = 100;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor worked with name." << std::endl;
	energyPoints = 50;
	hitPoints = 100;
	attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor worked." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		--this->energyPoints;
			std::cout << name << " made a perfect attack, hitting the " << target << " for " << attackDamage <<  " damage (ScavTrap)" <<  std::endl;
	}
	else
	{
		if (energyPoints == 0)
			std::cout << name << " does not possess enough energy points to execute an attack! (ScavTrap)" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << name << " ScavTrap is now in Gate keeper mode." << std::endl;
}