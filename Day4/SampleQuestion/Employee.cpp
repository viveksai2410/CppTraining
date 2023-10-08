#include "Employee.h"

Employee::Employee(std::string id, std::string name, float salary, Department dept, Project *project)
    : _id(id), _name(name), _salary(salary), _dept(dept), _project(project)
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs)
{
    os << "\nID : " << rhs._id << "\n";
    os << "Name : " << rhs._name << "\n";
    os << "Salary : " << rhs._salary << "\n";
    os << "Department : " << DepartmentToString(rhs._dept) << "\n";
    os << "Project : " << rhs._project->name() << "\n";
    return os;
}

std::string DepartmentToString(Department dept)
{
    if (dept == Department::DEVELOPMENT)
    {
        return "DEVELOPMENT";
    }
    else if (dept == Department::INTEGRATION)
    {
        return "INTEGRATION";
    }

    else
    {
        return "TESTING";
    }
}
