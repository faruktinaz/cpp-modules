#include"header.h"

void	set_FirstName(PhoneBook *CList, int i)
{
	std::string set_name;
	std::cout << "First Name: ";
	getline(std::cin, set_name);
	while (set_name.empty())
	{
		std::cout << "First Name: ";
		getline(std::cin, set_name);
	}
	CList->contact[i].setFirstName(set_name);
}

void	set_Surname(PhoneBook *CList, int i)
{
	std::string set_name;
	std::cout << "Surname: ";
	getline(std::cin, set_name);
	while (set_name.empty())
	{
		std::cout << "Surname: ";
		getline(std::cin, set_name);
	}
	CList->contact[i].setSurName(set_name);
}

void	set_Nickname(PhoneBook *CList, int i)
{
	std::string set_name;
	std::cout << "Nickname: ";
	getline(std::cin, set_name);
	while (set_name.empty())
	{
		std::cout << "Nickname: ";
		getline(std::cin, set_name);
	}
	CList->contact[i].setNickName(set_name);
}

void	set_PhoneNumber(PhoneBook *CList, int i)
{
	int x = 1;
	std::string set_name;
	while (x)
	{
		std::cout << "Phone Number-> ";
		getline(std::cin, set_name);
		for (int i = 0; set_name[i]; i++)
		{
			if (!(isdigit(set_name[i])))
				x = 1;
			else
				x = 0;
		}
	}
	CList->contact[i].setPhoneNumber(set_name);
}

void	set_DarkestSecret(PhoneBook *CList, int i)
{
	std::string set_name;
	std::cout << "𝓓𝓪𝓻𝓴𝓮𝓼𝓽 𝓢𝓮𝓬𝓻𝓮𝓽: ";
	getline(std::cin, set_name);
	while (set_name.empty())
	{
		std::cout << "𝓓𝓪𝓻𝓴𝓮𝓼𝓽 𝓢𝓮𝓬𝓻𝓮𝓽: ";
		getline(std::cin, set_name);
	}
	CList->contact[i].setSecret(set_name);
}