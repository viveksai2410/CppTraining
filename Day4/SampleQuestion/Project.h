#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
class Project
{
private:
    std::string _name;
    int _duration_days;
    float _budget;

public:
    Project(std::string name, int durationDays, float budget);
    Project() = delete;
    Project(const Project &) = delete;
    ~Project()
    {
        std::cout << "Project with Name :"
                  << _name
                  << " is destroyed\n";
    }

    std::string name() const { return _name; }

    int durationDays() const { return _duration_days; }

    float budget() const { return _budget; }
};

#endif // PROJECT_H
