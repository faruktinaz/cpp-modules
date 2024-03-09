#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

# define INVALID 0
# define CHAR 1
# define M_INTEGER 2
# define FLOAT 3
# define DOUBLE 4
# define SPEC 5



class ScalarConverter
{
	public:
		ScalarConverter();
		~ScalarConverter();
		static void convert(const std::string &literal);
		static int checkType(const std::string &literal);
		static void specLiteral(const std::string &literal);
		static void charLiteral(const std::string &literal);
		static void intLiteral(const std::string &literal);
		static void floatLiteral(const std::string &literal);
		static void doubleLiteral(const std::string &literal);
		static void cError(void);
		static void putChar(char c);
		static void putInt(int i);
		static void putFloat(float f);
		static void putDouble(double d);
		// ScalarConverter(ScalarConverter const &copy);
		// ScalarConverter &operator=(ScalarConverter const &other);
		
};

#endif