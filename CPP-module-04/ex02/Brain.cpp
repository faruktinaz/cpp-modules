#include "Brain.hpp"

Brain::Brain ()
{
	this->ideas = new std::string[100];
	for ( int i = 0; i < 100; i++ )
		ideas[i] = "amazing idea";
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain (const Brain &copy)
{
	std::cout << "brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain ()
{
	std::cout << "Brain Destructor called" << std::endl;
	delete [] this->ideas;
}

Brain &Brain::operator = (const Brain &copy)
{
	std::cout << "brain assignment operator overload called" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

std::string	*Brain::getIdeas() const
{
	return (this->ideas);
}
