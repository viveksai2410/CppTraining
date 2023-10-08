#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 5
#include "Product.h"
#include "ProductType.h"

void CreateObjects(Product * arr[SIZE]);

float AverageProductPrize(Product * arr[SIZE]);

float ProductTaxAmount(Product * arr[SIZE]);

float MaxProductPrize(Product * arr[SIZE]);

void FreeSpace(Product * arr[SIZE]);


#endif // FUNCTIONALITIES_H
