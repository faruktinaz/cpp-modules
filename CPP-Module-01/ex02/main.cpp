 #include <iostream>

int main()
{
	std::string str = "*HI THIS IS BRAIN*";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str degişkeninin bellek adresi: " << &str << std::endl;
	std::cout << "stringPTR değişkeninin bellek adresi: " << stringPTR << std::endl;
	std::cout << "stringREF değişkeninin bellek adresi: " << &stringREF << std::endl;
	std::cout << "\n";
	std::cout << "str değişkeninin değeri: " << str << std::endl;
	std::cout << "stringPTR değişkeninin değeri: " << *stringPTR << std::endl;
	std::cout << "stringREF değişkeninin değeri: " << stringREF << std::endl;
}