#include "CreditCard.h"

CreditCard::CreditCard(std::string cardnum, CardType CardType, float limit, int card_cvv_number)
: _cardnum(cardnum), _CardType(CardType), _limit(limit)
{
    if(card_cvv_number >100 && card_cvv_number <999)
    {
        _card_cvv_number = card_cvv_number;
    }
    else{
        throw std::runtime_error("enter valid number \n"); 
    }
}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << "_cardnum: " << rhs._cardnum
       << " _CardType: " <<DisplayEnum(rhs._CardType)
       << " _limit: " << rhs._limit
       << " _card_cvv_number: " << rhs._card_cvv_number;
    return os;
}

std::string DisplayEnum(CardType  val){
    if(val == CardType::MILES){
        return "MILES";
    }
    else if(val == CardType::NEO){
        return "NEO";
    }
    else{
        return "SIGNITURE";
    }
}