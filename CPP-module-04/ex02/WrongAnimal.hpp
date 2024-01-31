#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		void makeSound() const;
		WrongAnimal(const WrongAnimal& var);
		WrongAnimal &operator=(const WrongAnimal& var);
		std::string getType() const;
		virtual ~WrongAnimal();
};


#endif
