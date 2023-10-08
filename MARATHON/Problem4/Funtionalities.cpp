#include "Funtionalities.h"
#include "Customer.h"
#include "CustomerType.h"
#include "CreditCard.h"
#include "CardType.h"
#include "CustomerType.h"

/*
Creating Objects at a time for customer  and  credit card;
*/

void CreateObjects(Customer *arr[SIZE])
{
    arr[0] = new Customer("vivek", "C401", 
                         CustomerType::ELITE, 
                         new CreditCard("3456 3546 3647 1937",
                         CardType::MILES,
                         425.9f,
                         456));
    arr[1] = new Customer("Bhanu", "C402", 
                         CustomerType::PRIVILEGED, 
                         new CreditCard("1962 2682 1628 1628",
                         CardType::NEO,
                         426.9f,
                         458));
    arr[2] = new Customer("Harshith", "C403", 
                         CustomerType::PRO, 
                         new CreditCard("1827 2836 2036 2763",
                         CardType::SIGNITURE,
                         465.9f,
                         460));
}

/*
Checking ALL null in an array
*/

bool CheckAllNull(Customer *arr[SIZE])
{
    bool flag = true;
    for(int i = 0; i < SIZE; i++ ) {
        if (arr[i] != nullptr) {
            return false;
        }
    }
    return flag;
}

/*
Finding the number which is having the minimum limit value
*/

std::string ReturnMinimumLimitNumber(Customer *arr[SIZE])
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    float min = arr[0]->creditCard()->limit();
    std::string number;
    for(int i=1; i<SIZE; i++)
    {
        if(arr[i]->creditCard()->limit() > min)
        {
            min = arr[i]->creditCard()->limit();

            number = arr[i]->creditCard()->cardnum();
        }
    }
    return number;
}

/*
Checking card instances which are equal to the type passed in through argument
*/

void CredditCardInstances(Customer *arr[SIZE], CardType type)
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    for(int i = 0; i<SIZE; i++)
    {
        if(arr[i]->creditCard()->cardType() == type)
        {
            std::cout<<"The required object is: "<< *arr[i]<<"\n";
        }
    }
    
}

/*
Finding the customertyoe which is having ID that is passed parameter
*/

void ReturnCustomertype(Customer *arr[SIZE], std::string val)
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    for(int i = 0; i<SIZE; i++)
    {
        if(arr[i]->id() == val)
        {
            CustomerType type1 = arr[i]->cusType();

            std::cout<<"CUSTOMER TYPE is: "<< DisplayEnum(type1) <<"\n";
        }
    }   
}

/*
checking wheather all customers having card type SIGNITURE 
*/

bool SignitureChech(Customer *arr[SIZE])
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    bool flag = false;
    for(int i = 0; i<SIZE; i++)
    {
        if(arr[i]->creditCard()->cardType() != CardType::SIGNITURE){
            break;
        }

        if(arr[i]->creditCard()->cardType() == CardType::SIGNITURE)
        {
            return true;
        }
    }
    return false;
}

void FreeSpace(Customer *arr[SIZE])
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    for(int i = 0; i<SIZE; i++)
    {
        std::cout<< "deleting object"<<"\n";
        delete arr[i];
        std::cout<<" deleted successfully"<<"\n";
    }
}
