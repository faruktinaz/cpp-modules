#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include<iostream>
#include<sstream>
#include<cstdlib>
#include<string>
#include<fstream>
#include<map>


class BitcoinExchange
{
private:
	std::map<std::string, float> data;
public:
	BitcoinExchange();
	void read_data();
	int calc_min_year();
	~BitcoinExchange();
};

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}


#endif