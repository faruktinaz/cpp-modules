#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap c1("Tinaz");
	ScavTrap c2("Faruk");

	std::cout << c1.getName() << " energy -> " << c1.getEnergyPoints() << std::endl;
	std::cout << c1.getName() << " Attack Damage -> " <<c1.getAttackDamage() << std::endl;
	std::cout << c1.getName() << " Hit Points	 -> " <<c1.getHitPoints() << std::endl;
	std::cout << "\n\n" << std::endl;
	std::cout << c2.getName() << " energy -> " << c2.getEnergyPoints() << std::endl;
	std::cout << c2.getName() << " Attack Damage -> " <<c2.getAttackDamage() << std::endl;
	std::cout << c2.getName() << " Hit Points	 -> " <<c2.getHitPoints() << std::endl;
	c1.attack(c2.getName());
	c2.attack(c1.getName());
	c1.takeDamage(c2.getAttackDamage());
	std::cout << c1.getName() << " energy -> " << c1.getEnergyPoints() << std::endl;
	std::cout << c2.getName() << " energy -> " << c2.getEnergyPoints() << std::endl;
}