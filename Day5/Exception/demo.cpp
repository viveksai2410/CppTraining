#include "demo1.h"
#include <iostream>

void SwitchMenu()
{
    while (true)
    {
        int choice = 0;
        float number;
        std::cout << "Enter a number\n";
        std::cin >> number;
        std::cout << "Enter : \n 1. For square \n 2. For Cube \n 3. For Factorial\n 4. Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << square(number) << "\n";
            break;
        case 2:
            std::cout << cube(number) << "\n";
            break;
        case 3:
            try
            {
                std::cout << factorial((int)number) << "\n"; // Explicit Type Casting(compile Time casting)
                // factorial(static_cast<int>(number));//static Casting
            }
            catch (const std::exception &e)
            {
                std::cerr << e.what() << '\n';
            }
            break;
        case 4:
            exit(0); // Exit with zero errors
        default:
            break;
        }
    }
}

int main()
{
    SwitchMenu();
}