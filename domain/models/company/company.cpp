#include "company.h"

// constructor

Company::Company(string name_, string type_, int terminDelivery_) {
    name = name_;
    type = type_;
    terminDelivery = terminDelivery_;
}

// getters

string Company::getName() const {
    return name;
}

string Company::getType() const {
    return type;
}

int Company::getTerminDelivery() const {
    return terminDelivery;
}

// setters

void Company::setName(string name_) {
    name = name_;
}

void Company::setType(string type_) {
    type = type_;
}

void Company::setTerminDelivery(int terminDelivery_) {
    terminDelivery = terminDelivery_;
}