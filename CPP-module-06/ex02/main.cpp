#include "Base.hpp"

int main()
{
	Base *a = generate();
	identify(*a);
	identify(a);
	delete a;
}