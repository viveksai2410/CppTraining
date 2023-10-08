#include "Invoice.h"

Invoice::Invoice(std::string invoiceNumber, InvoiceType invoicetype, int invoiceitems)
: _invoiceNumber(invoiceNumber), _invoicetype(invoicetype), _invoiceitems(invoiceitems)
{
}
std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "_invoiceNumber: " << rhs._invoiceNumber
       << " _invoicetype: " << DisplayEnum(rhs._invoicetype) 
       << " _invoiceitems: " << rhs._invoiceitems;
    return os;
}

std::string DisplayEnum(InvoiceType  val){
    if(val == InvoiceType::E_BILL){
        return "E_BILL";
    }
    else if(val == InvoiceType::PAPER_SLIP){
        return "PAPER_SLIP";
    }
    else{
        return "SMS_GENERATED";
    }
}
