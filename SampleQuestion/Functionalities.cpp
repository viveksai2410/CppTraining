#include "Functionalities.h"
#define SIZE 5

#include "DebitCard.h"
#include "Card.h"
#include "CreditCard.h"
#include "Category.h"
#include "NoMatchingCardException.h"

bool CheckAllNull(Card *arr[SIZE])
{
    bool flag = true;

    for(int i = 0; i < SIZE; i++ ) {
        if (arr[i] != nullptr) {
            return false;
        }
    }

    return flag;
}

void CreateObejcts(Card *arr[SIZE])
{

    arr[0] = new DebitCard(1111, 876, Issuer::MASTERCARD, 1800.21f, 50000.0f,  Category::PREMIUM);
    arr[1] = new DebitCard(1451, 576, Issuer::MASTERCARD, 2800.21f, 50000.0f,  Category::SIGNATURE);
    arr[2] = new DebitCard(1671, 456, Issuer::VISA, 1800.56f, 50000.0f,  Category::PREMIUM);
    arr[3] = new DebitCard(1871, 222, Issuer::MASTERCARD, 7600.21f, 50000.0f,  Category::PREMIUM);
    arr[4] = new DebitCard(1111, 854, Issuer::RUPAY, 1900.21f, 50000.0f,  Category::DELUXE);
}


void MatchingIssuerCards(Card *arr[SIZE], Issuer value, Card* res[SIZE])
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    int k=0;
    
    for(int i=0; i < SIZE; i++) {

        if (arr[i] == nullptr){
            continue;
        }

        /*
            check if issuer is matching
            If yes, copy address in result at k position. update position by 1       
        */
        if (arr[i]->issuer() == value ) {
            res[k++] = arr[i];
        }
    }

}

int HighestChargeCard(Card *arr[SIZE])
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }

    //currentMax
    float max = arr[0]->annualCharge();

    //currentCharge
    float currentCardCharge = 0.0f;

    //pointer for result

    int res = arr[0]->cvv();

    for(int i = 0; i < SIZE; i++ ) {

        if (arr[i] == nullptr){
            continue;
        }

        currentCardCharge = arr[i]->annualCharge();
        
        if(currentCardCharge > max) {
            max = currentCardCharge;
            res = arr[i]->cvv();
        }
    }

    return res;
}

Card *PointerToMatchingNumberCard(Card *arr[SIZE], int number)
{
    if(CheckAllNull(arr)) {
        throw std::runtime_error("Invalid input. No data found\n");
    }
    Card* res = nullptr;
    for(int i = 0; i < SIZE; i++ ) {

        if (arr[i] == nullptr){
            continue;
        }

        if(arr[i]->number() == number) {
            res = arr[i];
        }
    }
    if(res == nullptr){
        throw NoMatchingCardException("No matching card found\n");    
    }

    else {
        return res;
    }
    

}
