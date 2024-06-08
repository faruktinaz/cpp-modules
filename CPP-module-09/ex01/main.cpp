#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN cal;
	if (argc == 2 && cal.is_arg_valid(argv[1]))
	{
		if (!cal.calculate_RPM(argv[1]))
			std::cout << "Error" << std::endl;
	}
	else
		std::cout << "Error" << std::endl;
}