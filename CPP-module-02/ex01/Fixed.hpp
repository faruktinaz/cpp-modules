#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed{
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);
	Fixed 	&operator=(const Fixed &number);
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
	void 	setRawBits(int const raw);
	int 	getRawBits(void) const;
	~Fixed();
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif