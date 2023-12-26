#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed &	Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->value = copy.value;
	return (*this);
}

Fixed::Fixed(const int value)
{
	std::cout << "Int Constructor called." << std::endl;
	this->value = value << bits;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float Constructor called." << std::endl;
    this->value = (roundf(value * (1 << bits)));
}


int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->value) / (1 << bits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	return (output << fixed.toFloat());
}

int Fixed::toInt( void ) const 
{
	return (this->value >> this->bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}
