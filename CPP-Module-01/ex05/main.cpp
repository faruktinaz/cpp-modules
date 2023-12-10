#include "Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INFO");

    return 0;
}