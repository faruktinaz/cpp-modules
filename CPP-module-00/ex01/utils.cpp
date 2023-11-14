#include"header.h"

void	print_first_name(PhoneBook *rehber, int search)
{
	std::string n_firstn;
	int spaces = 0;

	if (rehber->contact[search].getFirstName().length() > 10)
	{
		n_firstn = rehber->contact[search].getFirstName();
		n_firstn[9] = '.';
		for (int i = 10; n_firstn[i]; i++)
			n_firstn[i] = '\0';
		std::cout << n_firstn << "|";
	}
	else
	{
		spaces = 10 - rehber->contact[search].getFirstName().length();
		for (int i = 0; i < spaces; i++)
			std::cout << " ";
		std::cout << rehber->contact[search].getFirstName() << "|";
	}
}

void	print_surname(PhoneBook *rehber, int search)
{
	std::string n_surname;
	int spaces = 0;

	if (rehber->contact[search].getSurName().length() > 10)
	{
		n_surname = rehber->contact[search].getSurName();
		n_surname[9] = '.';
		for (int i = 10; n_surname[i]; i++)
			n_surname[i] = '\0';
		std::cout << n_surname << "|";
	}
	else
	{
		spaces = 10 - rehber->contact[search].getSurName().length();
		for (int i = 0; i < spaces; i++)
			std::cout << " ";
		std::cout << rehber->contact[search].getSurName() << "|";
	}
}

void	print_nickname(PhoneBook *rehber, int search)
{
	std::string n_nick_n;
	int spaces = 0;

	if (rehber->contact[search].getNickName().length() > 10)
	{
		n_nick_n = rehber->contact[search].getNickName();
		n_nick_n[9] = '.';
		for (int i = 10; n_nick_n[i]; i++)
			n_nick_n[i] = '\0';
		std::cout << n_nick_n << std::endl;
	}
	else
	{
		spaces = 10 - rehber->contact[search].getNickName().length();
		for (int i = 0; i < spaces; i++)
			std::cout << " ";
		std::cout << rehber->contact[search].getNickName() << std::endl;
	}	
}

void	print_Information(PhoneBook *rehber, int index)
{
	std::cout << "\033[1;32m First Name: " << rehber->contact[index].getFirstName() << std::endl;
	std::cout << "SurName: " << rehber->contact[index].getSurName() << std::endl;
	std::cout << "Nickname: " << rehber->contact[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << rehber->contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << rehber->contact[index].getSecret() << std::endl;
}

void	ft_putLine(int i)
{
	if (!i)
		std::cout << RED <<"\n───────────────────────────────────────────";
	else
		std::cout << RED <<"\n──────────────────────────────────────────────────\n" ;
}