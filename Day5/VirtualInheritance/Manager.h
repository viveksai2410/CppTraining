#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <ostream>

class Manager : virtual public Employee
{
private:
    int _size;

public:
    Manager(std::string id, std::string name, int size)
        : Employee(id, name), _size(size){};

    Manager(int size) : _size(size){};
    virtual ~Manager()
    {
        std::cout << "Manager Destroyed\n";
    }
    void CalculateTax() override
    {
        std::cout << "Manager tax" << std::endl;
    };

    int size() const { return _size; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Manager &rhs)
{
    os
        << " _size: " << rhs._size;
    return os;
}

#endif // MANAGER_H
