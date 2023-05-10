#pragma once

#include <iostream>
#include <vector>
#include "person.h"
#include "../statement/statement.h"
#include "../../models/goods/Goods.h"
#include "../../models/volunteer/volunteer.h"
#include "../../models/company/company.h"
#include "../../../library.h"

class Client : public Person {
public:
    Client();
    Client(const std::string& name, int age, const std::string& document, const std::string& documentInfo);

    virtual ~Client();


    void requestGoods(Goods goods);
    void getDocument(const std::string& document);
    class VolunteerRequest {
        // ...
    };

    class StatementRequest {
        // ...
    };

    class ViewVolunteer {
        // ...
    };

    class ViewCompany {
        // ...
    };

    class ViewProduct {
        // ...
private:
    std::string document;
    std::string documentInfo;
    std::vector<Goods> goodsRequest;
};