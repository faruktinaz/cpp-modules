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

	bool operator == (const Fixed &cVar) const;
	bool operator != (const Fixed &cVar) const;
	bool operator < (const Fixed &cVar) const;
	bool operator <= (const Fixed &cVar) const;
	bool operator > (const Fixed &cVar) const;
	bool operator >= (const Fixed &cVar) const;

	Fixed operator + (const Fixed &cVar) const;
	Fixed operator - (const Fixed &cVar) const;
	Fixed operator / (const Fixed &cVar) const;
	Fixed operator * (const Fixed &cVar) const;

	Fixed &operator++(void);
	Fixed operator++ (int);
	Fixed &operator--(void);
	Fixed operator--(int);

	static	Fixed &min(Fixed &a, Fixed &b);
	static	Fixed &max(Fixed &a, Fixed &b);
	static const	Fixed &min(const Fixed &a,const Fixed &b);
	static const	Fixed &max(const Fixed &a,const Fixed &b);

	~Fixed();
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif