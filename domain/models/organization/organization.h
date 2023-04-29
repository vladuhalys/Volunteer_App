#include "../volunteer/volunteer.h"

class Organization : public Account
{
	private:
	string name;
	string address;
	string phone;
	string email;
	string website;
	string description;
	list<Volunteer> volunteers;

};

