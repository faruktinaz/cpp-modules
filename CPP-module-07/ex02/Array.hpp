#include<iostream>
#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array
{
	private:
		T *elements;
		unsigned int _size;
	public:

		// constructors
		Array()
		{
			elements = NULL;
			_size = 0;
		}
		Array(unsigned int n)
		{
			elements = new T[n];
			_size = n;
		}

		// copy constructor
		Array(Array &cpy)
		{
			this->elements = 0;
			*this = cpy;
		}

		// oo
		T& operator[](unsigned int n)
		{
			if (n >= this->_size)
				throw outOfBound();
			return (this->elements[n]);
		}
		Array& operator=(const Array &arg)
		{
			this->elements = new T[arg._size];
			this->_size = arg._size;
			for (size_t i = 0; i < arg._size; i++)
				this->elements[i] = arg.elements[i];
			return (*this);
		}

		// exception
		class outOfBound : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("error: out of bound");
				}
		};

		unsigned int size() const 
		{
        	return _size;
    	}

		// destructor
		~Array()
		{
			delete[] elements;
		}


};

#endif