#include"header.h"

int main()
{
	PhoneBook rehber;
	int i;
	int x = 1; 
	int	search;
	std::string choose;
	std::string set_name;
	std::cout << RED << "\n\n	    WELCOME TO YOUR 𝓟𝓗𝓞𝓝𝓔 𝓑𝓞𝓞𝓚 " << RST << "\n\n";
	std::cout <<  BLU << "you can choose these buttons  ---> " << WHT << "ADD/EXIT/SEARCH\n ->\033[0m";
	while (1){
		getline(std::cin, choose);
		x = 1;
		if (choose == "ADD" || choose == "add")
		{
			if (i == 8)
				i = 0;
			std::cout << "you choosed add a person\n\n";
			std::cout << "First Name: ";
			getline(std::cin, set_name);
			rehber.contact[i].setFirstName(set_name);
			std::cout << "Surname: ";
			getline(std::cin, set_name);
			rehber.contact[i].setSurName(set_name);
			std::cout << "Nickname: ";
			getline(std::cin, set_name);
			rehber.contact[i].setNickName(set_name);
			while (x)
			{
				std::cout << "Phone Number-> ";
				getline(std::cin, set_name);
				for (int i = 0; set_name[i]; i++)
				{
					if (!(isdigit(set_name[i])))
						x = 1;
					else
					{
						x = 0;
						break;
					}
				}
			}
			rehber.contact[i].setPhoneNumber(set_name);
			std::cout << "𝓓𝓪𝓻𝓴𝓮𝓼𝓽 𝓢𝓮𝓬𝓻𝓮𝓽: ";
			getline(std::cin, set_name);
			rehber.contact[i].setSecret(set_name);
			rehber.contact[i].set_Index(i);
			std::cout << "Person successfuly added.\n";
			i++;
		}
		else if (choose == "SEARCH" || choose == "search")
		{
			search = 0;
			std::cout << "you choosed to search\n\n";
			ft_putLine(0);
			std::cout << GRN <<"\n     Index|      Name|   Surname|  Nickname\n" << RST;
			while ((rehber.contact[search].getFirstName()).size() != 0)
			{
				std::cout << "         " << rehber.contact[search].getIndex() + 1 << "|";
				print_first_name(&rehber, search);
				print_surname(&rehber, search);
				print_nickname(&rehber, search);
				search++;
			}
			ft_putLine(1);
			if (i == 0)
				std::cout << "No contact information to display in the phone book.\n\n";
			else{
				int	x;
				while (true)
				{
					std::cout << MAG << "Select the contact you want to view " << "1 - " << i << " ->" << RST;
					std::cin >> x;
					if (x <= 0 || x > i && std::cin.fail())
					{
						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						std::cout << "\nInvalid input\n";
					}
					if (x > 0 && x <= i)
						break;
				}
				print_Information(&rehber, x - 1);
				continue;
			}
		}
		else if (choose == "EXIT" || choose == "exit")
			return (0);
		std::cout <<  BLU << "you can choose these buttons  ---> " << WHT << "ADD/EXIT/SEARCH\n ->" << RST;
	}
	return (0);
}
