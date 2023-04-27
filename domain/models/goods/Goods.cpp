#include "Goods.h"

void Goods::setId(unsigned int id) {}
void Goods::setName(string name) {}
void Goods::setDescription(string description) {}
void Goods::setPrice(double price){}
void Goods::setQuantity(unsigned int quantity){}
void Goods::setCategory_id(unsigned int category_id){}

unsigned int Goods::getId() const {}
string Goods::getName() const{}
string Goods::getDescription() const{}
double Goods::getPrice() const{}
unsigned int Goods::getQuantity() const{}
unsigned int Goods::getCategory_id() const{}


Goods::Goods()
{}
Goods::Goods(string name, string description) : Goods()
{}
Goods::Goods(string name, string description, double price) : Goods(name, description)
{}
Goods::Goods(string name, string description, double price, unsigned int quantity) : Goods(name, description, price)
{}
Goods::Goods(string name, string description, double price, unsigned int quantity, unsigned int category_id) : Goods(name, description, price, quantity)
{}

Goods::~Goods(){}
