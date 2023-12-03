#include"header.h"

int main()
{
	PhoneBook CList;
	int i = 0;
	int	x;
	int	search;
	int search_count = 0;
	std::string choose;
	std::string set_name;

	std::cout << RED << "\n\n	    WELCOME TO YOUR 𝓟𝓗𝓞𝓝𝓔 𝓑𝓞𝓞𝓚 " << RST << "\n\n";
	std::cout << BLU <<"you can choose these buttons  ---> " << RST << "ADD/EXIT/SEARCH\n ->\033[0m";
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
			if (i == 8)
				search_count = 8;
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
				if (search_count == 0)
					x = chooseView(i);
				else
					x = chooseView(search_count);
				print_Information(&CList, x - 1);
				continue;
			}
		}
		else if (choose == "EXIT" || choose == "exit")
			return (0);
		std::cout <<  BLU << "you can choose these buttons  ---> " << WHT << "ADD/EXIT/SEARCH\n ->" << RST;
	}
	return (0);
}
