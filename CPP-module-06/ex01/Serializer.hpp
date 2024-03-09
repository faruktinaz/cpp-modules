#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <stdint.h>
#include <iostream>
#include "data.hpp"


class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &copyS);
		Serializer &operator=(const Serializer &copyS);
		~Serializer();

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif