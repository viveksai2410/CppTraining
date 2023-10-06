#include "Card.h"
#include "DebitCard.h"
#include "CreditCard.h"
#include "Functionalities.h"
#include "Issuer.h"
#include "NoMatchingCardException.h"

#define SIZE 5

int main() {
    
    Card* arr[SIZE];
    try {
        CreateObejcts(arr);
        
        int res = HighestChargeCard(arr);
        std::cout << "CVV: " << res << "\n";

        Card* ans[SIZE] = {nullptr};
        
        MatchingIssuerCards(arr, Issuer::MASTERCARD, ans);
        
        for(int i = 0; i < 5; i++ ) {
            if (ans[i] == nullptr) {
                break;
            }
            else {
                std::cout << *(ans[i]) << "\n";
            }
        }

        Card* val = PointerToMatchingNumberCard(arr, 7777); //purposely setting an invalid number to check exception
        
        if(val != nullptr) {
            std::cout <<"Details of card with matching number: \t" << *val <<"\n";
        }

    }catch (std::runtime_error& ex) {
        std::cout << ex.what() << "\n";
    }catch(NoMatchingCardException& ex) {
        std::cout << ex.what()<<"\n";
    }
}