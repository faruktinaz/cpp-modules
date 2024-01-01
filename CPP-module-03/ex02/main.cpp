#include "FragTrap.hpp"
#include"ScavTrap.hpp"

int main(void)
{
	ClapTrap c1("CT750");
	FragTrap f1("FTP100");
	ScavTrap s1("ST");

	c1.attack(f1.getName());
	f1.takeDamage(c1.getAttackDamage());
	f1.attack(c1.getName());
	c1.takeDamage(f1.getAttackDamage());
	s1.attack(f1.getName());
	f1.takeDamage(s1.getAttackDamage());
	std::cout << c1.getName() <<" hit points -> "<< c1.getHitPoints() << std::endl;
	std::cout << f1.getName() <<" hit points -> "<< f1.getHitPoints() << std::endl;


}