#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& var);
		Animal &operator=(const Animal& var);
		virtual void makeSound() const;
		std::string getType() const;
		virtual ~Animal();
};


#endif