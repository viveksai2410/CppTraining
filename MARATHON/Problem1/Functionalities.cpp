#include "Functionalities.h"

float TaxAmoutCal(float min){

    return min * 73.0f;
}

void CreateObjects(Product * arr[SIZE]){

    arr[0] = new Product ("p101", ProductType::APPLIANCE , 564.8f, "Samsang");
    arr[1] = new Product ("p102", ProductType::FMCG , 584.8f, "Samsang");
    arr[2] = new Product ("p103", ProductType::PERFUME , 514.8f, "Samsang");
    arr[3] = new Product ("p104", ProductType::FMCG , 594.8f, "Samsang");
    arr[4] = new Product ("p105", ProductType::APPLIANCE , 554.8f, "Samsang");

}

float AverageProductPrize(Product *arr[SIZE])
{
    float total = 0.0f;

    for(int i =0; i<SIZE; i++){
        total += arr[i]->productPrice();
    }

    return total/SIZE;
}

float ProductTaxAmount(Product *arr[SIZE])
{
    float val = arr[0]->productPrice();

    float min = TaxAmoutCal(val);

    for(int i=1; i<SIZE; i++){

        float val = arr[i]->productPrice();

        if(min < TaxAmoutCal(val)){
             min = val;
        }
    }

    return min;
    
}

float MaxProductPrize(Product *arr[SIZE])
{
    Product * max = arr[0];
    float val = max->productPrice();

    for(int i=1; i<SIZE; i++){

        if(arr[i]->productPrice() > val){
            val = arr[i]->productPrice();
        }
    }
    return val;
}

void FreeSpace(Product *arr[SIZE])
{
    for(int i =0; i<SIZE; i++){
        std::cout<<"deleting: ";
        delete arr[i];
       std::cout <<"deleted"<<"\n";
    }
    
}
