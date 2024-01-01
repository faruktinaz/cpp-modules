#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default consturctor worked." << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor worked with name." << std::endl;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

void FragTrap::attack(const std::string &target)
{
	if (energyPoints <= 0)
	{
		std::cout << name << " does not possess enough energy points to execute an attack! (Fragtrap)" << std::endl;
		return ;
	}
	std::cout << name << ", a legendary " << attackDamage << "-power hit on the " << target <<  std::endl;
	energyPoints--;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor worked." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << name << "wants to high five" << std::endl;
}