#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap c1;
	ClapTrap c2("Faruk");
	ClapTrap c3(c2);

	std::cout << c1.getName() << " energy -> " << c1.getEnergyPoints() << std::endl;
	std::cout << c1.getName() << " Attack Damage -> " <<c1.getAttackDamage() << std::endl;
	std::cout << c1.getName() << " Hit Points	 -> " <<c1.getHitPoints() << std::endl;
	c1.attack(c2.getName());
	std::cout << c1.getName() << " energy -> " << c1.getEnergyPoints() << std::endl;
}