#include "Card.h"
#include "CreditCard.h"

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _transaction_limit: " << rhs._transaction_limit;
    return os;
}

int CreditCard::operator+(const CreditCard obj)
{
    return limit() + obj.limit();
}

CreditCard::CreditCard(int number, int cvv, Issuer issuer, float charge, int limit)
    : Card(number, cvv, issuer, charge, limit), _transaction_limit(limit) {}

float CreditCard::CalculateTax()
{
    return (limit() / 100 ) * annualCharge();
}
