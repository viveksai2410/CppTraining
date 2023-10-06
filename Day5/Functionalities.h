#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Card.h"
#include "DebitCard.h"
#include "CreditCard.h"
#include "Issuer.h"

#define SIZE 5

/*
    A function to check if all poinnters in the container is nullptr
    i.e if data is empty
*/

bool CheckAllNull(Card* arr[SIZE]);

/*
    A function to create 3 objects of CreditCard and 2 objects of DebitCard

*/

void CreateObejcts(Card* arr[SIZE]);

/*
    return an array of Card pointers for those Cards whose _issuer matches the second parameter
*/

void MatchingIssuerCards(Card* arr[SIZE], Issuer value, Card* res[SIZE]);

/*
    return cvv of the card with highest _annual_charge
*/
int HighestChargeCard(Card* arr[SIZE]);

/*
    return pointer to function whose number is passed
*/

Card* PointerToMatchingNumberCard(Card* arr[SIZE], int number);

#endif // FUNCTIONALITIES_H
