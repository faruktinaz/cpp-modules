#include"Zombie.hpp"

Zombie* newZombie(std::string name);

int main(void)
{
	Zombie *zombie = newZombie("Zombie1");
	zombie->announce();
	delete zombie;
}