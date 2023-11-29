#include"header.h"

int main()
{
	PhoneBook CList;
	int i = 0;
	int	x;
	int	search;
	std::string choose;
	std::string set_name;
	std::cout << RED << "\n\n	    WELCOME TO YOUR 𝓟𝓗𝓞𝓝𝓔 𝓑𝓞𝓞𝓚 " << RST << "\n\n";
	std::cout << "you can choose these buttons  ---> " << "ADD/EXIT/SEARCH\n ->\033[0m";
	while (1)
	{
		getline(std::cin, choose);
		if (choose == "ADD" || choose == "add")
		{
			if (i == 8)
				i = 0;
			std::cout << "you choosed add a person\n\n";
			set_FirstName(&CList, i);
			set_Surname(&CList, i);
			set_Nickname(&CList, i);
			set_PhoneNumber(&CList, i);
			set_DarkestSecret(&CList, i);
			CList.contact[i].set_Index(i);
			std::cout << "Person successfuly added.\n";
			i++;
		}
		else if (choose == "SEARCH" || choose == "search")
		{
			search = 0;
			std::cout << "you choosed to search\n\n";
			ft_putLine(0);
			std::cout << GRN <<"\n     Index|      Name|   Surname|  Nickname\n" << RST;
			while ((CList.contact[search].getFirstName()).size() != 0)
			{
				std::cout << "         " << CList.contact[search].getIndex() + 1 << "|";
				print_first_name(&CList, search);
				print_surname(&CList, search);
				print_nickname(&CList, search);
				search++;
			}
			ft_putLine(1);
			if (i == 0)
				std::cout << "No contact information to display in the phone book.\n\n";
			else
			{
				while (1)
				{
				std::cout << MAG << "Select the contact you want to view " << "1 - " << i << " ->" << RST;
				std::cin >> x;
				if (x <= 0 || x > i && std::cin.fail())
				{
					std::cin.clear();
					std::cout << "\nInvalid input\n";
				}
				else
					break;
				}
			}
			print_Information(&CList, x - 1);
			continue;
			}
		else if (choose == "EXIT" || choose == "exit")
			return (0);
		std::cout <<  BLU << "you can choose these buttons  ---> " << WHT << "ADD/EXIT/SEARCH\n ->" << RST;
	}
	return (0);
}
