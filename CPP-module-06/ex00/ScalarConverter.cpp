#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "default consturctor called." << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "destructor called." << std::endl;
}
void ScalarConverter::cError(void)
{
	std::cout << "char: " << "Non displayable" << std::endl;
}

void ScalarConverter::putChar(char c)
{
    if (c <= 31 || c >= 127)
        cError();
    else
        std::cout << "char: '" << c << "'" << std::endl;
}

void ScalarConverter::putInt(int i)
{
    std::cout << "int: " << i << std::endl;
}

void ScalarConverter::putFloat(float f)
{
    if (f != static_cast<int>(f))
        std::cout << "float: " << f << "f" << std::endl;
    else
        std::cout << "float: " << f << ".0f" << std::endl;
}

void ScalarConverter::putDouble(double d)
{
    if (d != static_cast<int>(d))
        std::cout << "double: " << d << std::endl;
    else
        std::cout << "double: " << d << ".0" << std::endl;
}

int ScalarConverter::checkType(const std::string &literal)
{
	bool hasDot = false;
	bool hasF = false;
	if (!(literal.compare("+inf") && literal.compare("+inff") &&
		literal.compare("-inf") && literal.compare("-inff") &&
		literal.compare("nan") && literal.compare("nanf")))
			return SPEC;
	if (literal.length() == 1)
	{
		if (isdigit(literal[0]))
			return M_INTEGER;
		else
			return CHAR;
	}
	else if (literal.length() > 1)
	{
		if (literal.find('.') != std::string::npos)
		{
			hasDot = true;
			if (!isdigit(literal[literal.find('.') + 1]))
				return INVALID;
		}
		if (literal.find('f') != std::string::npos)
			hasF = true;
		if ((literal[literal.length() - 1] != 'f' && hasF == true) || (hasDot == true && (literal[0] == '.' || literal[literal.length()-1] == '.')))
			return INVALID;
		else if (hasF)
		{
			if (!hasDot)
				return INVALID;
			return FLOAT;
		}
		else if (hasDot)
			return DOUBLE;
		return M_INTEGER;
	}
	return INVALID;
}

void ScalarConverter::specLiteral(const std::string &literal)
{
	if (literal.compare("nan") || literal.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
	}
}

void ScalarConverter::intLiteral(const std::string &literal)
{
	int i;
	try
	{
		i = atoi(literal.c_str());
		putChar(static_cast<char>(i));
		putInt(i);
		putFloat(static_cast<float>(i));
		putDouble(static_cast<double>(i));
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
}

void ScalarConverter::charLiteral(const std::string &literal)
{
	char c = literal[0];

	putChar(c);
	putInt(static_cast<int>(c));
    putFloat(static_cast<float>(c));
    putDouble(static_cast<double>(c));
}

void ScalarConverter::floatLiteral(const std::string &literal)
{
	float f = strtof(literal.c_str(), NULL);

	putChar(static_cast<char>(f));
	putInt(static_cast<int>(f));
    putFloat(f);
    putDouble(static_cast<double>(f));
}

void ScalarConverter::doubleLiteral(const std::string &literal)
{
	double d = strtod(literal.c_str(), NULL);

	putChar(static_cast<char>(d));
	putInt(static_cast<int>(d));
    putFloat(static_cast<float>(d));
    putDouble(d);
}

void ScalarConverter::convert(const std::string &literal)
{
	int type = checkType(literal);
	switch (type)
	{
	case INVALID:
		std::cerr << "error: literal is invalid." << std::endl;
		break;
	case SPEC:
		specLiteral(literal);
		break;
	case CHAR:
		charLiteral(literal);
		break;
	case M_INTEGER:
		intLiteral(literal);
		break;
	case FLOAT:
		floatLiteral(literal);
		break;
	case DOUBLE:
		doubleLiteral(literal);
		break;
	}
}
