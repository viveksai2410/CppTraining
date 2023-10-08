#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"
#include "Project.h"
/*
    A function to create 3 objects of Projects in an array
    Also create 3 objects if Employees in a seperate array .
    Link one Project to one Employee
    Input : 2 arrays (one for Employee),(second for project)
    Output : void
*/
void CreateProjectsAndEmployees(Employee *emps[3], Project *projects[3]);

/*
    A function to return the pointer to the Employee tith highest salary
    Input : Employee array
    Output : Employee
*/
Employee* HighestSalary(Employee *emps[3]);
/*
    A function to return the count of all employee in the array ehose _dept value matches
    with the second parameter passed to this function
    Input : 
*/

int DepartmentByName(Employee *emps[3],Department dept);
/*
    Find the average _budget for all projects
*/
float AverageBudget(Project *projects[3]);
/*
    Function to deallocate the heap reservations made throughout
*/

void FreeMemory(Employee *emps[3]);

#endif // FUNCTIONALITIES_H
