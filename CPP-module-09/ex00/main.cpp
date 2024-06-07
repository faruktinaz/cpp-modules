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
	
	std::string buffer;
	std::map<std::string, float> data;

	std::ifstream file("data.csv");
	if (!file)
		return -1;

	std::ifstream argfile(argv[1]);
	if (argfile)
	{
		std::cout << "var" << std::endl;
	}
	else{
		std::cout << "YOOK" << std::endl;
		return -1;
	}

	std::getline(argfile, buffer);
	while (std::getline(argfile, buffer))
	{
		int year;
		int month;
		int day;
		double value;
		try
		{
			value = atof((buffer.substr(13)).c_str());
		}
		catch(const std::exception& e)
		{
			value = -1;
		}
		

		year = stoi(buffer.substr(0,4));
		month = stoi(buffer.substr(5,2));
		std::map<std::string, float>::iterator it;
		day = stoi(buffer.substr(8,10));
		if (((year > 2022) || (year < 2000 || ((month > 12) || (month < 1)) || ((day > 31) || (day < 1)))))
		{
			std::cout << "bad input => " << buffer.substr(0,10) << std::endl;
		}
		else if(value < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (value > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else
		{
			std::string date = std::to_string(year) + '-' + (month<10 ? "0"+std::to_string(month) : std::to_string(month)) + '-' + (day<10 ? "0"+std::to_string(day) : std::to_string(day));
			it = data.lower_bound(date);
			--it;
			std::cout << date << " => " << value << " = " << it->first << std::endl;
		}

	}

}