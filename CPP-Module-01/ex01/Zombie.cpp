#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "constructor worked" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Name << "dead" << std::endl; 
}

void	Zombie::announce()
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	Name = name;
}