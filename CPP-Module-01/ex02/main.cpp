 #include <iostream>

int main(){
    std::string Astring = "HI THIS IS BRAIN";
    std::string *stringPTR = &Astring;
    std::string &stringREF = Astring;

    std::cout << &Astring << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << Astring << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}