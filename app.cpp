#include "catalog.h"
#include "product.h"

int main() {
    Catalog catalog;
    Product product1("Laptop", 999.99);
    Product product2("Smartphone", 499.99);
    
    catalog.addProduct(product1);
    catalog.addProduct(product2);
    
    catalog.listProducts();
    
    return 0;
}
