#pragma once
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
    static void Send(Volunteer& volunteer_, unsigned int id)
    {
        // Create date variable for statment
        //
        volunteer_._statements.push_back(Statement statement1())
        volunteer_._goods.erase(id,id+1);

    }
private:
// Fields
// Methods
};