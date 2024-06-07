#include "catalog.h"
#include <iostream>

void Catalog::addProduct(const Product& product) {
    products.push_back(product);
}

void Catalog::listProducts() const {
    for (const auto& product : products) {
        std::cout << "Product: " << product.getName() << ", Price: " << product.getPrice() << std::endl;
    }
}
