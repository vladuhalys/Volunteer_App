#pragma once
#include "../../models/goods/Goods.h"
#include "../../../library.h"

class ViewProduct
{
public:
// Fields
// Constructors
// Methods
//      Getters
//      Setters
//      Others
    static void view(vector<Goods>& goods_, size_t id)
    {
        try
        {
            cout << goods_.at(id).getName() << endl;
		    cout << goods_.at(id).getDescription() << endl;
		    cout << goods_.at(id).getPrice() << endl;
		    cout << goods_.at(id).getQuantity() << endl;
        }
        catch(const std::exception& e)
        {
            cerr << e.what() << '\n';
        }
    }
private:
// Fields
// Methods
};