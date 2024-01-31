#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal
{
	public:
		Dog();
		Dog(const Dog& var);
		Dog &operator=(const Dog& var);
		void makeSound() const;
		std::string getType() const;
		~Dog();
};


#endif
