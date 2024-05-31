#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10000);
		int i = 0;
		while (i < 10000)
		{
			if (int(sp.getArray().size()) >= sp.getSize())
				throw Span::sizeException();
			sp.addNumber(i);
			i++;
		}
		sp.addNumber(10123);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}