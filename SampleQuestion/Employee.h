#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Department.h"
#include "Project.h"
#include <iostream>

class Employee
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    Department _dept;
    Project* _project;
public:
    Employee() = delete; //
    Employee(const Employee&) = delete;
    Employee(
        std::string id, 
        std::string name, 
        float salary, 
        Department dept,
        Project* ptr
    );

    ~Employee() {

        delete _project;
        std::cout << "Object with ID: "
        << _id
        << " is destroyed\n";
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    Department dept() const { return _dept; }

    Project* project() const { return _project; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

std::string DisplayEnum(const Department value);

#endif // EMPLOYEE_H