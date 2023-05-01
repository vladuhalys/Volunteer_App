#pragma once
#include <chrono>
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
        string now = chrono::system_clock::now();
        // Create date variable for statment
        //
        volunteer_._statements.push_back(Statement());
        volunteer_._goods.erase(volunteer_._goods.begin+id+1);

    }
private:
// Fields
// Methods
};