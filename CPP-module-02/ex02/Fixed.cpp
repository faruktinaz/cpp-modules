#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
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

Fixed &	Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->value = copy.value;
	return (*this);
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

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->value) / (1 << bits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	return (output << fixed.toFloat());
}

int Fixed::toInt() const
{

	return (this->value >> this->bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed& Fixed::min( Fixed &a, Fixed &b )
{
	std::cout << "min called" << std::endl; 
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b )
{
	std::cout << "max called" << std::endl; 
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b )
{
	std::cout << "const min called" << std::endl; 
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b )
{
	std::cout << "const max called" << std::endl; 
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

bool    Fixed::operator>(const Fixed &cVar) const
{
    return this->getRawBits() > cVar.getRawBits();
}

bool    Fixed::operator<(const Fixed &cVar) const
{
    return this->getRawBits() < cVar.getRawBits();
}

bool    Fixed::operator>=(const Fixed &cVar) const
{
    return this->getRawBits() >= cVar.getRawBits();
}

bool   Fixed::operator<=(const Fixed &cVar) const
{
    return this->getRawBits() <= cVar.getRawBits();
}

bool  Fixed::operator==(const Fixed &cVar) const
{
    return this->getRawBits() == cVar.getRawBits();
}

bool    Fixed::operator!=(const Fixed &cVar) const
{
    return this->getRawBits() != cVar.getRawBits();
}

Fixed   Fixed::operator+(const Fixed &cVar) const
{
    return Fixed(this->toFloat() + cVar.toFloat());
}

Fixed   Fixed::operator-(const Fixed &cVar) const
{
    return Fixed(this->toFloat() - cVar.toFloat());
}

Fixed   Fixed::operator*(const Fixed &cVar) const
{
    return Fixed(this->toFloat() * cVar.toFloat());
}

Fixed   Fixed::operator/(const Fixed &cVar) const
{
    return Fixed(this->toFloat() / cVar.toFloat());
}

Fixed&   Fixed::operator++()
{
    ++this->value;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp( *this );
    tmp.value = this->value++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    --this->value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp( *this );
    tmp.value = this->value--;
    return tmp;
}