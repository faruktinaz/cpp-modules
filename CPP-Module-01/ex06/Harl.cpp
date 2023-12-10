#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*functionsHarl[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	for (i = 0; i <= 3; i++)
	{
		if (level == levels[i])
			break ;
	}

	switch (i)
	{
		case 0:
			(this->*functionsHarl[0])();
			(this->*functionsHarl[1])();
			(this->*functionsHarl[2])();
			(this->*functionsHarl[3])();
			break;
		case 1:
			(this->*functionsHarl[1])();
			(this->*functionsHarl[2])();
			(this->*functionsHarl[3])();
			break;
		case 2:
			(this->*functionsHarl[2])();
			(this->*functionsHarl[3])();
			break;
		case 3:
			(this->*functionsHarl[3])();
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}