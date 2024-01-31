#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& var);
		Cat &operator=(const Cat& var);
		void makeSound() const;
		std::string getType() const;
		~Cat();
};


#endif
