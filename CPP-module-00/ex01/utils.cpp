#include"header.h"

void	print_first_name(PhoneBook *CList, int search)
{
    std::string first_name = CList->contact[search].getFirstName();
    int name_length = first_name.length();

    if (name_length > 10) {
        std::cout << std::setw(10) << first_name.substr(0, 9) + "." << "|";
    } else {
        std::cout << std::setw(10) << std::right << first_name << "|";
    }
}

void	print_surname(PhoneBook *CList, int search)
{
    std::string surname = CList->contact[search].getSurName();
    int name_length = surname.length();

    if (name_length > 10) {
        std::cout << std::setw(10) << surname.substr(0, 9) + "." << "|";
    } else {
        std::cout << std::setw(10) << surname << "|";
    }
}

void	print_nickname(PhoneBook *CList, int search)
{
    std::string nickname = CList->contact[search].getNickName();
    int name_length = nickname.length();

    if (name_length > 10) {
        std::cout << std::setw(10) << nickname.substr(0, 9) + "." << std::endl;
    } else {
        std::cout << std::setw(10) << nickname << std::endl;
    }
}

int	chooseView(int i)
{
	int x;
	while (1)
	{
		std::cout << BLU << "Select the contact you want to view " << "1 - " << i << " ->" << RST;
		std::cin >> x;
		if ((x <= 0 || x > i) || std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input\n";
		}
		else
			break;
	}
	return (x);
}

void	print_Information(PhoneBook *CList, int index)
{
	std::cout << "First Name: " << CList->contact[index].getFirstName() << std::endl;
	std::cout << "SurName: " << CList->contact[index].getSurName() << std::endl;
	std::cout << "Nickname: " << CList->contact[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << CList->contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << CList->contact[index].getSecret() << std::endl;
}

void	ft_putLine(int i)
{
	if (!i)
		std::cout << RED <<"\n───────────────────────────────────────────";
	else
		std::cout << RED <<"\n───────────────────────────────────────────\n" ;
}