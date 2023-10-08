#include "Project.h"

Project::Project(std::string name, int durationDays, float budget)
    : _name(name), _duration_days(durationDays), _budget(budget)
{
}
std::ostream &operator<<(std::ostream &os, const Project &rhs) {
    os << "_name: " << rhs._name
       << " _duration_days: " << rhs._duration_days
       << " _budget: " << rhs._budget;
    return os;
}
