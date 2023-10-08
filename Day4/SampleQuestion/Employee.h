#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Department.h"
#include "Project.h"
class Employee
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    Department _dept;
    Project *_project;

public:
    Employee(std::string id,
             std::string name,
             float salary,
             Department dept,
             Project *project);
    Employee() = delete; // we cannot use stack allocated or calculated array but we can use heap allocated objects
    Employee(const Employee &) = delete;
    ~Employee()
    {
        std::cout << "Object with ID :"
                  << _id
                  << " is destroyed\n";
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    Department dept() const { return _dept; }

    Project *project() const { return _project; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

    
};

std::string DepartmentToString(Department dept);

#endif // EMPLOYEE_H
