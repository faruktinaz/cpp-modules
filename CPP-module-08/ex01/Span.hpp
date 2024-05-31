#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<int> vec;
    public:
        Span();
        Span(unsigned int N);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
		int getSize();
        std::vector<int> getArray();
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        ~Span();
        class sizeException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class emptyException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream& operator << (std::ostream &of, Span &r);

#endif