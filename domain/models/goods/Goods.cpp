#include "Goods.h"

void Goods::setId(unsigned int id) 
{
	this->id = id;
}
void Goods::setName(string name) 
{
	if (name.length() > 0)
		this->name = name;
	else
		throw exception("Name length must be greater than 0");
}
void Goods::setDescription(string description) 
{
	if (description.length() > 0)
		this->description = description;
	else
		throw exception("Description length must be greater than 0");
}
void Goods::setPrice(double price)
{
	this->price = price;
}
void Goods::setQuantity(unsigned int quantity)
{
	if (quantity > 0)
		this->quantity = quantity;
	else
		throw exception("Quantity must be greater than 0");
}
void Goods::setCategory_id(unsigned int category_id)
{
	this->category_id = category_id;
}



unsigned int Goods::getId() const {
	return this->id;
}
string Goods::getName() const{
	return this->name;
}
string Goods::getDescription() const{
	return this->description;
}
double Goods::getPrice() const{
	return this->price;
}
unsigned int Goods::getQuantity() const{
	return this->quantity;
}
unsigned int Goods::getCategory_id() const{
	return this->category_id;
}


Goods::Goods()
{
	setId(Id::get_and_update_id_counter());
	setName("NULL");
	setDescription("NULL");
	setPrice(0.0);
	setQuantity(0);
	setCategory_id(0);
}
Goods::Goods(string name, string description) : Goods()
{
	setName(name);
	setDescription(description);
}
Goods::Goods(string name, string description, double price) : Goods(name, description)
{
	setPrice(price);
}
Goods::Goods(string name, string description, double price, unsigned int quantity) : Goods(name, description, price)
{
	setQuantity(quantity);
}
Goods::Goods(string name, string description, double price, unsigned int quantity, unsigned int category_id) : Goods(name, description, price, quantity)
{
	setCategory_id(category_id);
}

Goods::Goods(Goods& object) {
	setId(Id::get_and_update_id_counter());
	setName(object.getName());
	setDescription(object.getDescription());
	setPrice(object.getPrice());
	setQuantity(object.getQuantity());
	setCategory_id(object.getCategory_id());
}

Goods::~Goods(){
	this->name.clear();
	this->description.clear();
}
