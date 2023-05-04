#pragma once
#include <chrono>
#include <string>
#include "../../models/volunteer/volunteer.h"
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
    static void Send(Volunteer& volunteer_, size_t id)
    {
        std::time_t t = std::time(nullptr);
        std::tm tm = *std::localtime(&t);
        std::string date_time = std::asctime(&tm);
        
        string description = "Send " + volunteer_.get_goods().at(id).getName() + " " + to_string(volunteer_.get_goods().at(id).getId())
        + to_string(volunteer_.get_goods().at(id).getCategory_id()) + to_string(volunteer_.get_goods().at(id).getQuantity()) + 
        to_string(volunteer_.get_goods().at(id).getPrice()) + volunteer_.get_goods().at(id).getDescription();

        volunteer_.get_statements().push_back(Statement(date_time,description,false,0));
        //volunteer_.get_goods().erase(volunteer_.get_goods().begin() + id);
    }
private:
// Fields
// Methods
};