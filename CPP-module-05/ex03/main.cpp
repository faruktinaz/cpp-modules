#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		AForm *form1;
		AForm *form2;
		AForm *form3;
		AForm *form4;
		Intern Intern;

		form1 = Intern.makeForm("robotomy request", "Bender");
		std::cout << form1->getName() << std::endl;
		form2 = Intern.makeForm("shrubbery creation", "Bender");
		std::cout << form2->getName() << std::endl;
		form3 = Intern.makeForm("presidential pardon", "Bender");
		std::cout << form3->getName() << std::endl;
		form4 = Intern.makeForm("unknown type", "Bender");
		std::cout << form4->getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}	
	return (0);
}