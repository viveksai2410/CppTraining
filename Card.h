#ifndef CARD_H
#define CARD_H

#include "Issuer.h"
#include <iostream>

class Card
{
private:
    
    //Data members in the class
    int _number;
    int _cvv;
    Issuer _issuer;
    float _annual_charge;
    int _limit;
    

public:
    
    virtual float CalculateTax() = 0;

    Card(int number, int cvv, Issuer issuer, float charge, int limit );

    ~Card() {
        std::cout << "Card with number: " << _number << " is destroyed\n";
    }

    //getters
    int number() const { return _number; }

    int cvv() const { return _cvv; }

    Issuer issuer() const { return _issuer; }

    float annualCharge() const { return _annual_charge; }

    int limit() const { return _limit; }

    //for displaying Card attributes
    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);
};


std::string DisplayEnum(const Issuer value);
#endif // CARD_H
