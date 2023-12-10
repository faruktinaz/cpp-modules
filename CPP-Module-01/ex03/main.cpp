#include"HumanA.hpp"
#include"HumanB.hpp"


int main()
{
	Weapon club = Weapon("crude spiked club");
	
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	std::cout << "\n\n";

	Weapon clubJ = Weapon("crude spiked club");

	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(clubJ);
	jim.attack();
	clubJ.setType("some other type of club");
	jim.attack();
}
