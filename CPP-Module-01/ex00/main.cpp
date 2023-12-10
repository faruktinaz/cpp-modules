#include"Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("Foo");
	randomChump("faruk");
	zombie->announce();
	delete zombie;
}