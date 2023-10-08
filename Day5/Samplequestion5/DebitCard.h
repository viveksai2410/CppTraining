#ifndef DEBITCARD_H
#define DEBITCARD_H

#include "Category.h"
#include <iostream>
#include "Issuer.h"
#include "Card.h"

class DebitCard : public Card
{
private:
    Category _category;
public:
    DebitCard(int number, int cvv, Issuer issuer, float charge, int limit,  Category category);

    ~DebitCard() {
        std::cout << "DebitCard with number : " << number() << " is destroyed\n";
    }

    float CalculateTax() override;

    Category category() const { return _category; }

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);

    
};


std::string DisplayEnum(const Category value);

#endif // DEBITCARD_H
