#include <iostream>
#include "Functionalities.h"
#include "Bill.h"
#include "InvoiceType.h"
#include "Invoice.h"
#define SIZE 3

int main(){
   
    try
    {
        Bill * arr[SIZE];

        Invoice * arr1[SIZE];

        CreateObjects(arr);

        std::cout<<"Highest Bill Amount is : "<< HighestBillAmount(arr)<<"\n";

        std::cout<<" Bill amount :   "<< Billamount1(arr, "I101")<<"\n";

        BillInstance(arr, 456.0f, arr1);

        MaxMinBillAmount(arr);
    }

    catch (std::runtime_error& ex) {
        std::cout << ex.what() << "\n";
    }
 
    


}