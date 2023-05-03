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
        string description = "Send " + volunteer_._goods.at(id).getName() + " " + to_string(volunteer_._goods.at(id).getId())
        + to_string(volunteer_._goods.at(id).getCategory_id()) + to_string(volunteer_._goods.at(id).getQuantity()) + 
        to_string(volunteer_._goods.at(id).getPrice()) + volunteer_._goods.at(id).getDescription();
        volunteer_._statements.push_back(Statement(date_time,description,false,0));
        volunteer_._goods.erase(volunteer_._goods.begin() + id);
    }
private:
// Fields
// Methods
};