#include <iostream>
#include <limits>

int main() {
    int num;

    while (true) {
        std::cout << "Enter a number: ";
        std::cin >> num;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
        } else {
            std::cout << "You entered: " << num << std::endl;
            break;
        }
    }

    return 0;
}