#include "../../../library.h"
#include "../id/Id.h"

#ifndef goods
#define goods

class Goods
{
private:
	unsigned int id;
	string name;
	string description;
	double price;
	unsigned int quantity;
	unsigned int category_id;
public:
	void setId(unsigned int id);
	void setName(string name);
	void setDescription(string description);
	void setPrice(double price);
	void setQuantity(unsigned int quantity);
	void setCategory_id(unsigned int category_id);

	unsigned int getId() const;
	string getName() const;
	string getDescription() const;
	double getPrice() const;
	unsigned int getQuantity() const;
	unsigned int getCategory_id() const;


	Goods();
	Goods(string name, string description);
	Goods(string name, string description, double price);
	Goods(string name, string description, double price, unsigned int quantity);
	Goods(string name, string description, double price, unsigned int quantity, unsigned int category_id);
	Goods(Goods & object);

	~Goods();

};

#endif