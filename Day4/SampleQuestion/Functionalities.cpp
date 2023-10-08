#include "Functionalities.h"

void CreateProjectsAndEmployees(Employee *emps[3], Project *projects[3])
{
    Project *p1 = new Project("P1", 1000.0f, 10);
    Project *p2 = new Project("P2", 2000.0f, 20);
    Project *p3 = new Project("P3", 3000.0f, 30);
    projects[0] = p1;
    projects[1] = p2;
    projects[2] = p3;

    Employee *e1 = new Employee("E1", "Emp1", 1000.0f, Department::DEVELOPMENT, p1);
    Employee *e2 = new Employee("E2", "Emp2", 2000.0f, Department::INTEGRATION, p2);
    Employee *e3 = new Employee("E3", "Emp3", 3000.0f, Department::INTEGRATION, p3);
    emps[0] = e1;
    emps[1] = e2;
    emps[2] = e3;
}

Employee *HighestSalary(Employee *emps[3])
{
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

float AverageBudget(Project *projects[3])
{
    float sum = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        sum += projects[i]->budget();
    }
    return sum / 3;
}

// Delete the project first then delete the employee
void FreeMemory(Employee *emps[3])
{
    // delete inner project pointer
    for (int i = 0; i < 3; i++)
    {
        delete emps[i]->project();
        delete emps[i];
    }
}
