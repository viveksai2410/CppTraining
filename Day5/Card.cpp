#include "Card.h"

Card::Card(int number, int cvv, Issuer issuer, float charge, int limit)

    : _issuer(issuer), _annual_charge(charge), _limit(limit)
{
    if (number >= 1000 && number < 10000 ) {
        _number = number;
    }
    else {
        std::runtime_error("Invalid Number for Card");
    }

    if (cvv >= 100 && cvv < 1000 ) {
        _cvv = cvv;
    }
    else {
        std::runtime_error("Invalid CVV for Card");
    }
}
std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "_number: " << rhs._number
       << " _cvv: " << rhs._cvv
       << " _issuer: " << DisplayEnum(rhs._issuer)
       << " _annual_charge: " << rhs._annual_charge
       << " _limit: " << rhs._limit;
    return os;
}

std::string DisplayEnum(const Issuer value)
{
    return std::string();
}
