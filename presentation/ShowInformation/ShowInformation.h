#pragma once
#include "../../library.h"
#include "../../domain/models/company/company.h"
#include "../../domain/models/volunteer/volunteer.h"

class ShowInformation
{
public:
// Fields
// Constructors
    ShowInformation();
    ShowInformation(const ShowInformation& showInformation);
    ShowInformation(ShowInformation&& other);
    ~ShowInformation();
// Methods
//        Getters
static vector<Company>& get_companies(list<Company>& companies)
{
    return companies_;
}
//        Setters
//        Other
    static void show_company()
    {
        for (const Company& i : companies_) 
        {
            cout << i.getName() << '\n';
            cout << i.getType() << '\n';
            cout << i.getTerminDelivery() << '\n';
        }
    }
    
    // TODO: Take Organization in method's arguments and do double iteration from list of volunteers in organization and volunteer's goods.
    static void show_purchases(Volunteer& _volunteer)
    {
        for (const Goods& i : _volunteer.get_goods()) 
        {
            cout << i.getName() << '\n';
            cout << i.getPrice() << '\n';
            cout << i.getDescription() << '\n';
            cout << i.getQuantity() << '\n';
            cout << i.getId() << '\n';
            cout << i.getCategory_id() << '\n';
            cout << '\n';
        }

    }

    // TODO: Take Organization in method's arguments and do double iteration from list of volunteers in organization and volunteer's goods.
    static void show_costs(Volunteer& _volunteer)
    {
        double num = 0;
        for (const Goods& i : _volunteer.get_goods()) 
        {
            num += i.getPrice();
        }

        cout << num << '\n';
    }

    // TODO: Take Clients or Organization in method's argument
    static void show_endUsers()
    {
        cout << "None" << '\n';
    }
private:
    static vector<Company> companies_;
// Fields
// Methods
};