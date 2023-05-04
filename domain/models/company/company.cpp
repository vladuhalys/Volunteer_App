#include "company.h"

// constructor Company

Company::Company(string name_, string type_, int terminDelivery_) {
    name = name_;
    type = type_;
    terminDelivery = terminDelivery_;
}

// getters

string Company::getName() const {
    return name;
}

string Company::getType() const {
    return type;
}

int Company::getTerminDelivery() const {
    return terminDelivery;
}

// setters

void Company::setName(string name_) {
    name = name_;
}

void Company::setType(string type_) {
    type = type_;
}

void Company::setTerminDelivery(int terminDelivery_) {
    terminDelivery = terminDelivery_;
}


// constructor Product

Product::Product(string name_, string description_, double price_, int quantity_) {
    name = name_;
    description = description_;
    price = price_;
    quantity = quantity_;
}

// getters

string getName() const {
    return name;
}

string getDescription() const {
    return description;
}

double getPrice() const {
    return price;
}

int getQuantity() const {
    return quantity;
}

// setters

void setName(string name_) {
    name = name_;
}

void setDescription(string description_) {
    description = description_;
}

void setPrice(double price_) {
    price = price_;
}

void setQuantity(int quantity_) {
    quantity = quantity_;
}

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