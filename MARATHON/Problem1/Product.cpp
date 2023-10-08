#include "Product.h"

Product::Product(std::string productId, ProductType Ptype, float productPrice, std::string productBarnd)
: _productId(productId), _Ptype(Ptype), _productPrice(productPrice), _productBarnd(productBarnd)
{
}