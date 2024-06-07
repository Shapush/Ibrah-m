#ifndef CATALOG_H
#define CATALOG_H

#include <vector>
#include "product.h"

class Catalog {
public:
    void addProduct(const Product& product);
    void listProducts() const;

private:
    std::vector<Product> products;
};

#endif
