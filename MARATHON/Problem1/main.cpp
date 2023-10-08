#include <iostream>
#include "Functionalities.h"
#define SIZE 5

int main(){
    Product * arr[SIZE];
    CreateObjects(arr);

    std::cout<<"Average Product prize is: "<< AverageProductPrize(arr)<<"\n";

    std::cout<<"Min tax amount of a product is : "<< ProductTaxAmount(arr)<<"\n";

    std::cout<<"Max product prize of product is :" << MaxProductPrize(arr)<<"\n";

    FreeSpace(arr);
}