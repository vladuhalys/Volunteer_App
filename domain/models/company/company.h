
#include "../account/account.h"
class Company : public Account
{
private:
    string name;
    string type;
    int terminDelivery;

public:

    // constructor
    Company() = default;
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



