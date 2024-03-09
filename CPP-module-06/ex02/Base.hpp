#ifndef BASE_HPP
#define BASE_HPP
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<unistd.h>


class Base
{
public:
	virtual ~Base();
};

Base *generate();
void identify(Base* p);
void identify(Base& p);

#endif