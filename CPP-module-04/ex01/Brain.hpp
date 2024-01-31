#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string *ideas;
	public:
		Brain();
		Brain(std::string *var);
		Brain(const Brain& var);
		~Brain();
		Brain &operator=(const Brain& var);
		std::string *getIdeas() const;
};


#endif
