#include "DebitCard.h"
#include "CreditCard.h"
#include "Category.h"
#include "Issuer.h"

//delegating to parent class constructor and using member list initialization
DebitCard::DebitCard(int number, int cvv, Issuer issuer, float charge, int limit, Category category)
    : Card(number, cvv, issuer, charge, limit), _category(category)
{
}

std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _category: " <<  DisplayEnum( rhs._category );
    return os;
}

//display the ENUM literals
std::string DisplayEnum(const Category value)
{
    if (value == Category::DELUXE) {
        return "DELUXE";
    } else if (value == Category::PREMIUM) {
        return "PREMIUM";
    } else {
        return "SIGNATURE";
    }
}

float DebitCard::CalculateTax()
{
    if (issuer() == Issuer::VISA) {
        return (limit() / 100) * annualCharge();
    }

    else if (issuer() == Issuer::MASTERCARD) {
        return (limit() / 50) * annualCharge();
    }

    else {
        return (limit() / 10) * annualCharge();
   }
}
