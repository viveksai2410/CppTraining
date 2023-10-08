#include "Functionalities.h"

void CreateProjectsAndEmployees(Employee *emps[3])
{
    emps[0] = new Employee("E101", "Ahmed", 1000, Department::DEVELOPMENT, new Project("KAP", 80, 1000));
    emps[1] = new Employee("E102", "Mohamed", 2000, Department::TESTING, new Project("AUTOSAR", 80, 1000));
    emps[2] = new Employee("E103", "Ali", 3000, Department::INTEGRATION, new Project("KAP", 80, 1000));
}

Employee *HighestSalary(Employee *emps[3])
{
    if (CheckNull(emps))
    {
        // data is empty
        throw std::runtime_error("Data is empty!");
    }

    //    return the Employee with highest salary
    int max = 0;
    for (int i = 0; i < 3; i++)
    {

        if (emps[i]->salary() > emps[max]->salary())
        {
            max = i;
        }
    }
    return emps[max];
}

int DepartmentByName(Employee *emps[3], Department dept)
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (emps[i]->dept() == dept)
        {
            count++;
        }
    }
    return count;
}

float AverageBudget(Employee *arr[3])
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty!");
    }
    float sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i]->project()->budget();
    }
    return sum / 3;
}

// Delete the project first then delete the employee
void FreeMemory(Employee *emps[3])
{
    // delete inner project pointer
    for (int i = 0; i < 3; i++)
    {
        delete emps[i];
    }
}


bool CheckNull(Employee *emps[3])
{
    for (int i = 0; i < 3; i++)
    {
        if (emps[i] != nullptr)
        {
            return false;
        }
    }
    return true;
}