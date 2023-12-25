#include"Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


	a.setRawBits(b.getRawBits());
	std::cout << "d and b are equal ?"<< std::endl;
	if (a == b)
		std::cout << "** true" << std::endl;
	else
		std::cout << "** false" << std::endl;

	return 0;
}