#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3
#include "Bill.h"
#include "Invoice.h"

void CreateObjects(Bill * arr[SIZE]);

std::string HighestBillAmount(Bill * arr[SIZE]);

float Billamount1(Bill * arr[SIZE], std::string val);

void BillInstance(Bill * arr[SIZE], float Threshhold, Invoice* res[SIZE]);

void MaxMinBillAmount(Bill * arr[SIZE]);




#endif // FUNCTIONALITIES_H
