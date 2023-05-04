#pragma once
#include "../volunteer/volunteer.h"

class Organization : public Volunteer
{
public:
	string name;
	string address;
	string phone;
	string email;
	string website;
	string description;
	list<Volunteer> volunteers;

	Organization();
	Organization(const Organization& other);
	Organization(Organization&& other) noexcept;
	~Organization();

	void addVolunteer(Volunteer volunteer);
	void removeVolunteer(Volunteer volunteer);
	void updateVolunteer(Volunteer volunteer);

};

