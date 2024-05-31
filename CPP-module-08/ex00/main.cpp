#include "easyfind.hpp"

int main()
{
    std::vector<int> array;

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);
    array.push_back(4);

    try
    {
    	std::cout << *easyfind(array, 2) << std::endl;
        std::cout << *easyfind(array, 1231);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}