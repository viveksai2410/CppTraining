#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include "Employee.h"
#include <ostream>

class Executive : virtual public Employee
{
private:
    std::string _location;
public:
    Executive(std::string id, std::string name, std::string location) 
     : Employee(id, name), _location(location) {};
    // To avoid the duplicate 
    Executive(std::string location) : _location(location){};
    void CalculateTax() override{
        std::cout << "Executive tax" << std::endl;
    }

    virtual ~Executive() {
        std::cout<<"Executive Destroyed\n";
    }

    std::string location() const { return _location; }

    friend std::ostream &operator<<(std::ostream &os, const Executive &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Executive &rhs) {
    os
       << " _location: " << rhs._location;
    return os;
}


#endif // EXECUTIVE_H
