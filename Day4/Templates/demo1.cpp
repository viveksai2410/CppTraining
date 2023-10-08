#include <iostream>
// Compile Time Polymorphism
// generics in Java or Templates in CPP
template <typename T>
void display(T arr[3])
{
    for (int i =0; i < 3; i++)
    {
        std::cout << "Address: " << arr[i] << "\n";
    }
}

class Employee
{
private:
    /* data */
public:
    Employee(/* args */) {}
    ~Employee() {}
};

class Car
{
private:
    /* data */
public:
    Car(/* args */) {}
    ~Car() {}
};

int main()
{
    Car *cars[3];
    Employee *emps[3];

    for(int i=0;i<3;i++){
        cars[i] = new Car();
        emps[i]= new Employee();
    }
    display<Car*>( cars );//<Car*> is optional in modern cpp 
    // display(cars);//also allowed
    display<Employee*>( emps );
}