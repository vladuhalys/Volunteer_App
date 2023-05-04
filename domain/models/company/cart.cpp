#include "company.h"

// constructor Cart

Cart::Cart() {

    vector<Product> products;
}
void addProduct(Product product) {
    products.push_back(product);
}

void removeProduct(int index) {
    products.erase(products.begin() + index);
}

void clearCart() {
    products.clear();
}

double getTotalPrice() const {
    double totalPrice = 0;
    for (const auto& product : products) {
        totalPrice += product.getPrice();
    }
    return totalPrice;
}

vector<Product> getProducts() const {
    return products;
}