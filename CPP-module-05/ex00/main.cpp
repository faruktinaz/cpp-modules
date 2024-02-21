#include"Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("faruk", 123);
		Bureaucrat b("test", 2);
		Bureaucrat c(a);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}