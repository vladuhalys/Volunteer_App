#include "person.h"

void Person:: setName(string name) {
	if (name.length() <= 1) {
		cout << "Error: name is empty" << endl;
	}
	else
	{
		this->name = name;
	}
}
void Person:: setLastName(string lastName) {
	if (lastName.length() <= 1) {
		cout << "Error: Last name is empty" << endl;
	}
	else
	{
		this->lastName = lastName;
	}
}
const void Person:: setAge(int age) {
	if (age < 18)
	{
		cout << "You are too small";
	}
	else {
		this->age = age;
	}
}

const string Person::getName() {
	return name;
}
const string Person::getLastName() {
	return lastName;
}
const int Person:: getAge() {
	return age;
}
Person:: ~Person() {
	name.clear();
	lastName.clear();
	delete &age;
}

