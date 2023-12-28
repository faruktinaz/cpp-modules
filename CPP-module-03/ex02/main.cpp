#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap d;
	std::cout << d.getEnergyPoints() << std::endl;
	std::cout << d.getAttackDamage() << std::endl;
	std::cout << d.getHitPoints() << std::endl;
	d.attack("test");
}