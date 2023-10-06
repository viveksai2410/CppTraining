#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"
#include "Project.h"

#define SIZE 3

/*
    A function to check if all positions of the array are nullptr
*/

bool CheckNull(Employee* arr[SIZE]);

/*
    Also, create 3 objects of Employees in an array.
    Link one Project to one Employee

    Input : 1 array (one for Employees)
    Output : void
*/

void CreateObjects(  Employee* arr1[SIZE]  );

/*
    A function to return the pointer to the Employee with 
    the highest salary
*/

Employee* EmployeeWithHighestSalary(  Employee* arr1[SIZE] );



/*
    A function to return the count of all Employees in the array
    whose _dept value matches with the second parameter passed to
    this function
*/

int CountEmployeeWithGivenDepartment(Employee* arr1[SIZE], Department dept);

/*
    Find the average _budget for all projects
*/

float AverageBudget(Employee* arr1[SIZE]);

/*
    A function to deallocate the heap reservation made throughout the program
*/

void FreeMemory(Employee* arr1[SIZE]);


#endif // FUNCTIONALITIES_H
