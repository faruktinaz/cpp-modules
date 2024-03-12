#include"iter.hpp"
#include<iostream>
#include <vector>

int main()
{
	std::cout << "-int array-" << std::endl;
	int intArray[] = {1,2,3};
	int arraySize = sizeof(intArray) / sizeof(intArray[0]);
	iter(intArray, arraySize, showElements<int>);
	
	std::cout << "-char array-" << std::endl;
	char charArr[] = {'f', 't', 'e'};
	iter(charArr, sizeof(charArr), showElements<char>);

	std::cout << "-double array-" << std::endl;
	double doubleArray[] = {1.2, 2.3, 4.5};
	iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), showElements<double>);
}