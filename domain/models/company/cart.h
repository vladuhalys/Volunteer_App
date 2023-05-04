
#include "../account/account.h"

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







