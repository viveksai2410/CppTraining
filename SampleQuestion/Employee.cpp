#include "Employee.h"

Employee::Employee(std::string id, std::string name, float salary, Department dept, Project *ptr)
    : _id(id), _name(name), _salary(salary), _dept(dept), _project(ptr)
{
}

std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _dept: " << DisplayEnum( rhs._dept )
       << " _project: " << *rhs._project;
    return os;
}

std::string DisplayEnum(const Department value)
{
    if (value == Department::DEVELOPMENT) {
        return "DEVELOPMENT";
    }

    else if (value == Department::INTEGERATION) {
        return "INTEGRATION";
    }
    
    else {
        return "TESTING";
    }
}
