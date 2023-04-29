#pragma once
#include "../../models/statement/Statement.h"

class SendProduct
{
public:
// Fields
// Constructors
// Methods
//        Getters
//        Setters
//        Other
    static void Send(list<Goods>& goods_volunteer_, unsigned int id)
    {
        goods_volunteer_.erase(id,id+1);
    }
private:
// Fields
// Methods
};