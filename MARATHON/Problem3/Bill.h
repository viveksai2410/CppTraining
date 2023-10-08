#ifndef BILL_H
#define BILL_H
#include "Invoice.h"
#include <ostream>

class Bill
{
private:
    float _billamount;
    float _billtaxamount;
    Invoice * _billAssociatedVoice;
public:
    Bill(float billamount,
        float billtaxamount,
        Invoice * billAssociatedVoice);

    Bill() = delete;
    Bill(const Bill &) = delete;
    ~Bill() {}

    float billamount() const { return _billamount; }

    float billtaxamount() const { return _billtaxamount; }

    Invoice * billAssociatedVoice() const { return _billAssociatedVoice; }

    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);

    
  
};

#endif // BILL_H
