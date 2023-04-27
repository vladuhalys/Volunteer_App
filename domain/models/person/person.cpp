#include "person.h"

void Person:: setName(string name) {
	this->name = name;
}
void Person:: setLastName(string lastName) {
	this->LastName = lastName;
}
const void Person:: setAge(int age) {
	this->Age = age;
}

string Person::getName() {
	return name;
}
string Person::getLastName() {
	return LastName;
}
int Person:: getAge() {
	return Age;
}
Person:: ~Person() {
	name.clear();
	LastName.clear();
}
