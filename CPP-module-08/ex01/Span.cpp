#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span()
{
	this->N = 0;
}

void Span::addNumber(int number)
{
	try
	{
		if (this->vec.size() >= this->N)
			throw sizeException();
		this->vec.push_back(number);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::vector<int> Span::getArray()
{
	return this->vec;
}
int Span::getSize()
{
	return this->N;
}

int Span::longestSpan()
{
    std::vector<int>::iterator maxElements = std::max_element(this->vec.begin(), this->vec.end());
    std::vector<int>::iterator minElements = std::min_element(this->vec.begin(), this->vec.end());
    if (this->vec.size() == 1 || this->vec.size() == 0)
        throw emptyException();
    return (*maxElements - *minElements);
};

int Span::shortestSpan()
{
	int min = longestSpan();
	std::vector<int>::iterator j;
	if (this->vec.size() <= 1)
		throw emptyException();
	for (std::vector<int>::iterator i = this->vec.begin();  i < this->vec.end(); i++)
	{
		j = i;
		while (++j < this->vec.end())
		{
            if (min > abs(*i - *j))
                min = abs(*i - *j);
		}
	}
	return (min);
}

const char *Span::sizeException::what() const throw()
{
    return ("size error");
}

const char *Span::emptyException::what() const throw()
{
    return ("emptyException error");
}

Span::Span(const Span &copy)
{
    this->vec = copy.vec;
    this->N = copy.N;
}

Span& Span::operator=(const Span &copy)
{
    this->vec = copy.vec;
    this->N = copy.N;
    return (*this);
}

std::ostream& operator<<(std::ostream& output, Span& span)
{
    const std::vector<int> numbers = span.getArray();
    for (std::vector<int>::const_iterator i = numbers.begin(); i != numbers.end(); ++i)
    {
        output << *i << std::endl;
    }
    return output;
}

Span::~Span()
{
}