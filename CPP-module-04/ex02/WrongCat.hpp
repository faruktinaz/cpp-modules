#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& var);
		WrongCat &operator=(const WrongCat& var);
		void makeSound() const;
		std::string getType() const;
		~WrongCat();
};


#endif
