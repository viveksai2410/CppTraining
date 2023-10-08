#include "Customer.h"


Customer::Customer(std::string name, std::string id, CustomerType CusType, CreditCard *Credit_Card)
: _name(name), _id(id), _CusType(CusType), _Credit_Card(Credit_Card)
{
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_name: " << rhs._name
       << " _id: " << rhs._id
       << " _CusType: " <<DisplayEnum(rhs._CusType)
       << " _Credit_Card: " << *rhs._Credit_Card;
    return os;
}

std::string DisplayEnum(CustomerType  val){
    if(val == CustomerType::ELITE){
        return "ELITE";
    }
    else if(val == CustomerType::PRIVILEGED){
        return "PRIVILEGED";
    }
    else{
        return "PRO";
    }
}
