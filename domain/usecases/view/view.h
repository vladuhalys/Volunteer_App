#pragma once
#include <list>
#include "../../models/goods/Goods.h"

class ViewProduct
{
public:
// Fields
// Constructors
// Methods
//      Getters
//      Setters
//      Others
    static void view(std::list<Goods> goods_, size_t id)
    {
        std::cout << goods_.at(id).get_name() << std::endl;
		std::cout << goods_.at(id).get_description() << std::endl;
		std::cout << goods_.at(id).get_price() << std::endl;
		std::cout << goods_.at(id).get_quantity() << std::endl;
    }
private:
// Fields
// Methods
};