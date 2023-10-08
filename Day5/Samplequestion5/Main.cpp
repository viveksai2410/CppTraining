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
        
        Card** h = MatchingIssuerCards(arr, Issuer::MASTERCARD, arr);

        for(int i = 0; i<sizeof(h); i++){
            if(i==3){
                break;
            }
            std::cout<< *h[i]<<"\n";
        }

        CreditCard * c = new CreditCard(9, 8, Issuer::MASTERCARD, 564.7f, 5);
        CreditCard * c1 = new CreditCard(10, 56, Issuer::MASTERCARD, 563.7f, 2);

        *c + *c1;

        
        // for(int i = 0; i < 5; i++ ) {
        //     if (ans[i] == nullptr) {
        //         break;
        //     }
        //     else {
        //         std::cout << *(ans[i]) << "\n";
        //     }
        // }

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