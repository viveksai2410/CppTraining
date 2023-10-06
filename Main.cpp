#include "Functionalities.h"
#include "Employee.h"
#include <iostream>
#define SIZE 3


int main() {
    Employee* arr[SIZE] = {};

    try {
        CreateObjects(arr);
        std::cout << "Average budget: " << AverageBudget(arr) << "\n"; 
        Employee* res = EmployeeWithHighestSalary(arr);
        std::cout << "Employee with highest Salary: " << *res << "\n";
        int count = CountEmployeeWithGivenDepartment(arr, Department::DEVELOPMENT);
        std::cout << "Count of Employees with given Department: " << count << "\n";
    }catch(std::runtime_error& ex) {
        std::cout <<  ex.what(); //
    }

    FreeMemory(arr);

    
}