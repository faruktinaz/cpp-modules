#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const int size = 10;
	Animal *animals[size];
	for (int i = 0; i < size; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "\n\n" << std::endl;
	for (int i = 0; i < size; i++)
	{
		delete animals[i];
	}


	return 0;
}