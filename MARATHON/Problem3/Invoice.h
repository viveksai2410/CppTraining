#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include "InvoiceType.h"

class Invoice
{
private:
    std::string _invoiceNumber;
    InvoiceType _invoicetype;
    int _invoiceitems;
public:
    Invoice(std::string invoiceNumber,
            InvoiceType invoicetype,
            int invoiceitems);

    Invoice() = delete;
    Invoice(const Invoice &) = delete;
    
    ~Invoice() {
        std::cout<<"Invoice with ID: "
        <<_invoiceNumber
        <<"is now deleted";
    }

    std::string invoiceNumber() const { return _invoiceNumber; }

    InvoiceType invoicetype() const { return _invoicetype; }

    int invoiceitems() const { return _invoiceitems; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);

    
};
std::string DisplayEnum(InvoiceType  val);

#endif // INVOICE_H
