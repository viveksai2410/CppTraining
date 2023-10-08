#include "Functionalities.h"

void CreateObjects(Bill *arr[SIZE])
{
    arr[0] = new Bill(563.06f, 456.0f, new Invoice("I101", InvoiceType::E_BILL, 3));
    arr[1] = new Bill(553.06f, 496.0f, new Invoice("I103", InvoiceType::PAPER_SLIP, 3));
    arr[2] = new Bill(663.06f, 556.0f, new Invoice("I104", InvoiceType::SMS_GENERATED, 3));
}

bool CheckAllNull(Bill *arr[SIZE])
{
    bool flag = true;
    for(int i = 0; i < SIZE; i++ ) {
        if (arr[i] != nullptr) {
            return false;
        }
    }
    return flag;
}


std::string HighestBillAmount(Bill *arr[SIZE])
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    float max = arr[0]->billamount();
    std::string invoicenumber;
    for(int i=1; i<SIZE; i++){
        if(arr[i]->billamount() > max){
            max = arr[i]->billamount();
            invoicenumber = arr[i]->billAssociatedVoice()->invoiceNumber();
        }
    }
    return invoicenumber;
}

float Billamount1(Bill *arr[SIZE], std::string val)
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    float billamount = 0.0f;
    for(int i=0; i<SIZE; i++)
    {
        if(arr[i]->billAssociatedVoice()->invoiceNumber() == val)
        {
            billamount = arr[i]->billamount();
        }
    }
    return billamount;
}

void BillInstance(Bill *arr[SIZE], float Threshhold, Invoice* res[SIZE])
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    for(int i=0; i<SIZE; i++)
    {
        if(arr[i]->billamount() > Threshhold)
        {
            std::cout<< *arr[i]<<"\n";
        }
    }
}

void MaxMinBillAmount(Bill *arr[SIZE])
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input No data found in the object");
    }

    float min = arr[0]->billamount();
    float max = arr[0]->billamount();

    for(int i=1; i<SIZE; i++)
    {
        if(arr[i]->billamount() == 0){
            throw std::runtime_error("Invalid input No data found in the object");
        }

        if(min > arr[i]->billamount())
        {
            std::cout<<"min invoice number is: "<< arr[i]->billAssociatedVoice()->invoiceNumber()<<"\n";
        }
        
        if(max < arr[i]->billamount())
        {
            std::cout<<"max invoice number is: "<< arr[i]->billAssociatedVoice()->invoiceNumber()<<"\n";
        }
    }
}




