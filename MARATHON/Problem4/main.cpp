#include <iostream>
#include "Funtionalities.h"
#include "Customer.h"
#include "CreditCard.h"
#include "CardType.h"
#include "CustomerType.h"
#define SIZE 3

int main()
{
    try
    {
        Customer * arr[SIZE];

        CreateObjects(arr);

        std::cout<<"The number is : "<< ReturnMinimumLimitNumber(arr) <<"\n";

        CredditCardInstances(arr, CardType::MILES);

        ReturnCustomertype(arr, "C401");

        std::cout<<"The value is : "<< SignitureChech(arr)<<"\n";

        FreeSpace(arr);

    }
    catch (std::runtime_error& ex) {
        std::cout << ex.what() << "\n";
    }
    
    


}