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

void BitcoinExchange::btc_exchange(char *arg_file, int min_year)
{	
	std::ifstream argfile(arg_file);
	std::string buffer;
	std::getline(argfile, buffer);

	if (!argfile)
	{
		std::cout << "YOOK" << std::endl;
		return ;
	}

	while (std::getline(argfile, buffer))
	{
		std::map<std::string, float>::iterator it = data.begin();
		int year;
		bool check_date = false;
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
		day = stoi(buffer.substr(8,10));
		if (((year > 2022) || (year < min_year || ((month > 12) || (month < 1)) || ((day > 31) || (day < 1)))))
		{
			std::cout << "Error: bad input => " << buffer.substr(0,10) << std::endl;
		}
		else if(value < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (value > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else
		{
			std::string date = std::to_string(year) + '-' + (month<10 ? "0"+std::to_string(month) : std::to_string(month)) + '-' + (day<10 ? "0"+std::to_string(day) : std::to_string(day));
			while (it != data.end())
			{
				if (it->first == date)
				{
					std::cout << date << " => " << value << " = " << (it->second * value) << std::endl;
					break;
				}
				it++;
				if (it == data.end())
					check_date = true;
			}
			if (check_date)
			{
				it = data.lower_bound(date);
				--it;
				std::cout << date << " => " << value << " = " << (it->second * value) << std::endl;
			}
		}
	}
}

BitcoinExchange::~BitcoinExchange()
{
	
}