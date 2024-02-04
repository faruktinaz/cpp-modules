#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << "\n\n" << std::endl;
	std::cout << "\n\n" << std::endl;
	std::cout << "\n\n" << std::endl;
	const int size = 10;
	Animal *animals[size];
	for (int i = 0; i < size; i++)
	{
		if (i < 5)
		{
			animals[i] = new Dog();
			animals[i]->makeSound();
		}
		else
		{
			animals[i] = new Cat();
			animals[i]->makeSound();
		}
	}
	std::cout << "\n\n" << std::endl;
	for (int i = 0; i < size; i++)
	{
		delete animals[i];
	}
	delete j;
	delete i;


	return 0;
}