#include <iostream>
#include <list>
#include <vector>

// declaring alias for data type
using ls = std::list<std::string>;

template <typename T> // or template <class T>
class Employee
{
private:
    T _skills;
    std::string _id;
    float _age;

public:
    Employee(T skills, std::string id, float age)
        : _skills(skills), _id(id), _age(age)
    {
    }
    ~Employee()
    {
        std::cout << "Employee with ID :"
                  << _id
                  << " is destroyed\n";
    }
};


int main()
{
    ls skills = {"C++", "Java", "Python"};
    // object of class Employee of list of strings
    Employee<ls>* e1 = new Employee<ls>(skills, "emp101", 25.5);
    // delete e1;
    return 0;
}