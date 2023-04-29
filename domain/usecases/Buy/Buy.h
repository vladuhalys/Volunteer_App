#pragma once
#include <list>
#include "../../models/goods/Goods.h"
#include "../../models/volunteer/volunteer.h"

class Buy
{
public:
    // Fields
    // Constructor
    // Methods
    //        Getters
    //        Setters
    //        Others
    static void buy(Volunteer& volunteer_,list<Goods>& goods_, unsigned int id)
    {
        goods_.erase(id,id+1);
        
    }

private:
    // Fields

    // Methods
};