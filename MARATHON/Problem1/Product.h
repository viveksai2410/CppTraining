#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include "ProductType.h"

class Product
{
private:
    std::string _productId;
    ProductType _Ptype;
    float _productPrice;
    std::string _productBarnd;

public:
    Product(std::string productId,
            ProductType Ptype,
            float productPrice,
            std::string productBarnd);

    
    ~Product() {
        std::cout<<"Product with id: "
        <<_productId
        <<" is destructed";
    }

    std::string productId() const { return _productId; }

    ProductType ptype() const { return _Ptype; }

    float productPrice() const { return _productPrice; }

    std::string productBarnd() const { return _productBarnd; }
};

#endif // PRODUCT_H
