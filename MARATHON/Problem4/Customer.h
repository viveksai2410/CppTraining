#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "CustomerType.h"
#include "CreditCard.h"

class Customer
{
private:
    std::string _name;
    std::string _id;
    CustomerType _CusType;
    CreditCard *_Credit_Card;

public:
    Customer(std::string name,
            std::string id,
            CustomerType CusType,
            CreditCard *Credit_Card);

    Customer() = delete;
    Customer(const Customer &) = delete;

    ~Customer() {
        delete _Credit_Card;
        std::cout<<"Credit card with id: "
        << _id
        <<" is now deleted";
    }

    std::string name() const { return _name; }

    std::string id() const { return _id; }

    CustomerType cusType() const { return _CusType; }

    CreditCard *creditCard() const { return _Credit_Card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

    
};
std::string DisplayEnum(CustomerType  val);

#endif // CUSTOMER_H
