#pragma once
#include "../../models/goods/Goods.h"
#include "../../models/volunteer/volunteer.h"

class BuyProduct
{
public:
    // Fields
    // Constructor
    // Methods
    //        Getters
    //        Setters
    //        Others
    static void buy(Volunteer& volunteer_, vector<Goods>& goods_, size_t id)
    {
        try
        {
            volunteer_.get_goods().push_back(goods_.at(id));
            goods_.erase(goods_.begin() + id);
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