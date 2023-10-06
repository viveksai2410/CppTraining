#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "Issuer.h"
#include "Card.h"
#include <ostream>

class CreditCard : public Card
{
private:
    float _transaction_limit;

public:

    int operator+ (const CreditCard obj);

    CreditCard(int number, int cvv, Issuer issuer, float charge, int limit );
    
    ~CreditCard() {
        std::cout << "Credit card with number: " << number() << " is destroyed\n";
    }

    float transactionLimit() const { return _transaction_limit; }
    
    float CalculateTax() override;
    
    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
};

#endif // CREDITCARD_H
