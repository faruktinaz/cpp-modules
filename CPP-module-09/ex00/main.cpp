#include "BitcoinExchange.hpp"
#include <iostream>
#include<fstream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: bad argument" << std::endl;
		return 0;
	}
	BitcoinExchange btc;
	btc.read_data();
	btc.btc_exchange(argv[1], btc.calc_min_year());
}