#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap{
private:
	std::string		name;
	unsigned int	energyPoints;
	unsigned int	attackDamage;
	unsigned int	hitPoints;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator = (const ClapTrap &var);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName(void);
	unsigned int getEnergyPoints(void);
	unsigned int getHitPoints(void);
	unsigned int getAttackDamage(void);
};

#endif