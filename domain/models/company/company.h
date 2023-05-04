
#include "../account/account.h"


class Company : public Account
{
private:
    string name;
    string type;
    int terminDelivery;

public:

    // constructor

    Company(string name_, string type_, int terminDelivery_);
    

    // getters

    string getName() const;

    string getType() const;

    int getTerminDelivery() const;

    // setters

    void setName(string name_);

    void setType(string type_);

    void setTerminDelivery(int terminDelivery_);
};


class Product : public Account
{
private:
    string name;
    string description;
    double price;
    int quantity; // кількість

public:

    // constructor

    Product(string name_, string description_, double price_, int quantity_);


    // getters

    string getName() const;

    string getDescription() const;

    double getPrice() const;

    int getQuantity() const;

    // setters

    void setName(string name_);

    void setDescription(string description_);

    void setPrice(double price_);

    void setQuantity(int quantity_);
};


class Cart : public Account
{
private:
    vector<Product> products;

public:

    void addProduct(Product product);

    void removeProduct(int index);

    void clearCart();

    double getTotalPrice() const;

    vector<Product> getProducts() const;
};







