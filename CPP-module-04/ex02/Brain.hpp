#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain& cpy);
		~Brain(void);
		Brain& operator=(const Brain& cpy);
};

#endif