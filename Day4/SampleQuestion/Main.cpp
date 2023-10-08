#include <iostream>
#include "Functionalities.h"
#include "Employee.h"
#include "Project.h"
#include "Department.h"

int main(){
    Employee *emps[3];
    Project *projects[3];
    CreateProjectsAndEmployees(emps,projects);
    std::cout << "Employee with highest salary is : " << *HighestSalary(emps) << std::endl;
    std::cout << "Number of employees in Development department is : " << DepartmentByName(emps,Department::DEVELOPMENT) << std::endl;
    std::cout << "Average budget for all projects is : " << AverageBudget(projects) << std::endl;
    FreeMemory(emps);
    return 0;
}