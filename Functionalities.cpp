#include "Functionalities.h"

#define SIZE 3

//Composition code

bool CheckNull(Employee *arr[SIZE])
{
    bool flag = true;
    for(int i=0;i<3;i++) {
        if (arr[i] != nullptr) {
            return false;
        }
    }

    return flag;
}
void CreateObjects(Employee *arr1[SIZE])
{
    arr1[0] = new Employee(
        "E101",
        "Harshit",
        566677.0f,
        Department::DEVELOPMENT,
        new Project("KAP",80,879980.0f)
    );

     arr1[1] = new Employee(
        "E102",
        "Harshit ULTRA",
        1566677.0f,
        Department::TESTING,
        new Project("AUTOSAR",10,1879980.0f)
    );

     arr1[2] = new Employee(
        "E101",
        "Harshit ULTRA PRO MAX",
        2566677.0f,
        Department::INTEGERATION,
        new Project("P-ADAS",90,2879980.0f)
    );
}

Employee *EmployeeWithHighestSalary(Employee *arr1[SIZE])
{

    if(CheckNull(arr1)) {
        //data is empty!
        throw std::runtime_error("Data is empty!");
    }
    Employee* result = arr1[0];
    //assume first employee salary as highest
    float max = arr1[0]->salary(); 

    //take 1 variable for recording current position object's salary in loop
    float currentSal = 0.0f;
    
    for(int i=0; i < SIZE; i++ ) {
        
        //fetch current position employee's salary
        currentSal = arr1[i]->salary();
        
        //if currentSal is more than max, update max and result pointers
        if (currentSal > max ) {
            max = currentSal;
            result = arr1[i]; 
        }
    }

    //return result AFTER THE WHOLE LOOP ONLY
    return result;
}

int CountEmployeeWithGivenDepartment(Employee *arr1[SIZE], Department dept)
{
    if (CheckNull(arr1)) {
        throw std::runtime_error("Data is empty");
    }

    int count = 0;
    for(int i=0; i < SIZE; i++) {
        if (arr1[i]->dept() == dept) {
            count++;
        }
    }

    return count;
}

float AverageBudget(Employee *arr2[SIZE])
{
    if(CheckNull(arr2)) {
        //data is empty!
        throw std::runtime_error("Data is empty!");
    }

    float total = 0.0f;

    for(int i=0; i < SIZE ;i++) {
        //access project pointer first and then access budget from it
        total += arr2[i]->project()->budget();
    }

    return total / 3;
}

void FreeMemory(Employee *arr1[SIZE])
{
    //delete the inner Project pointer

    for(int i=0;i<SIZE;i++) {
        delete arr1[i]; //ensure this also deletes Project!!!!!
    }
}

