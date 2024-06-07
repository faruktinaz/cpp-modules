#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

void BitcoinExchange::read_data()
{
	std::string buffer;
	std::ifstream file("data.csv");
	if (!file)
		return ;

	std::getline(file, buffer);
	while (std::getline(file, buffer))
    {
		float value = atof((buffer.substr(11)).c_str());
		data[buffer.substr(0, 10)] = value;
    }
    file.close();
}

int BitcoinExchange::calc_min_year()
{
	int min_date = 2024;
	std::map<std::string, float>::iterator it;

	for (it = this->data.begin(); it != this->data.end(); it++)
		if (min_date > std::stoi(it->first.substr(0,4)))
			min_date = std::stoi(it->first.substr(0,4));
	return (min_date);
}

BitcoinExchange::~BitcoinExchange()
{

}