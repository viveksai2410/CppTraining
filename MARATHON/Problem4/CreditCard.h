#ifndef CREDITCARD_H
#define CREDITCARD_H
#include <iostream>
#include "CardType.h"

class CreditCard
{
private:
    std::string _cardnum;
    CardType _CardType;
    float _limit;
    int _card_cvv_number;
public:
    CreditCard(std::string cardnum,
                CardType CardType,
                float limit,
                int card_cvv_number);

    CreditCard() = delete;
    CreditCard(const CreditCard &) = delete; 
    
    ~CreditCard() {
        std::cout<<"Card with cardnum: "
        <<_cardnum
        <<" is now deleted";
    }

    std::string cardnum() const { return _cardnum; }

    CardType cardType() const { return _CardType; }

    float limit() const { return _limit; }

    int cardCvvNumber() const { return _card_cvv_number; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
 
};
std::string DisplayEnum(CardType  val);

#endif // CREDITCARD_H
