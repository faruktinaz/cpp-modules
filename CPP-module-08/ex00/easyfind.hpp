#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<algorithm>
#include<vector>

class MyException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return("null");
		}
};

template <typename T>
typename T::iterator easyfind(T  container, int number)
{
	typename T::iterator it = std::find(container.begin(), container.end(), number);
	if (it == container.end())
		throw MyException();
	return it;
}


#endif