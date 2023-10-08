#include "Bill.h"

Bill::Bill(float billamount, float billtaxamount, Invoice *billAssociatedVoice)
:  _billtaxamount(billtaxamount), _billAssociatedVoice(billAssociatedVoice)
{
    if(billamount > billtaxamount)
    {
        _billamount = billamount;  
    }

    else {
        std::runtime_error("Invalid billamount : ");
    }
}

std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "_billamount: " << rhs._billamount
       << " _billtaxamount: " << rhs._billtaxamount
       << " _billAssociatedVoice: " << *rhs._billAssociatedVoice;
    return os;
}

