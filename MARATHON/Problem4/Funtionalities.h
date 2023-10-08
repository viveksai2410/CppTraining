#ifndef FUNTIONALITIES_H
#define FUNTIONALITIES_H
#define SIZE 3
#include "Customer.h"
#include "CreditCard.h"
#include "CardType.h"

void CreateObjects(Customer * arr[SIZE]);

std::string ReturnMinimumLimitNumber(Customer * arr[SIZE]);

void CredditCardInstances(Customer * arr[SIZE], CardType type);

void ReturnCustomertype(Customer * arr[SIZE], std::string val);

bool SignitureChech(Customer * arr[SIZE]);

void FreeSpace(Customer * arr[SIZE]);

#endif // FUNTIONALITIES_H
