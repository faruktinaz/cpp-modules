#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "default serializer constructor called." << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{ 
    *this = copy;
}

Serializer &Serializer::operator=(const Serializer &copy)
{ 
    if (this == &copy)
        return (*this);
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

Serializer::~Serializer()
{
	std::cout << "serializer destructor called." << std::endl;
}