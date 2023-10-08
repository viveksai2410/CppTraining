#include <iostream>
#include "Director.h"
#include "Manager.h"
#include "Executive.h"
#include "Employee.h"

int main()
{
    Director *e1 = new Director("E100", "John", 10, "New York", 10000);
    e1->CalculateTax();
    std::cout << *e1<<"\n";

    std::cout << "ID from Employee: " << e1->id() << std::endl;

    std::cout << "Name from Employee: " << e1->getName() << std::endl;

    std::cout << "Location from Executive: " << e1->location() << std::endl;

    std::cout << "Size from Manager: " << e1->size() << std::endl;

    std::cout << "Budget from Director: " << e1->budget() << std::endl;

    std::cout << "Calling CalculateTax() from Manager" << std::endl;
    e1->Manager::CalculateTax();
    std::cout << "\n";

    std::cout << "Calling CalculateTax() from Executive" << std::endl;
    e1->Executive::CalculateTax();
    std::cout << "\n";

    delete e1;
    return 0;
}