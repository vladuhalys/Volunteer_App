#include ".../../../../../library.h"

class Person {
private:
	string name;
	string LastName;
	int Age;
public:

	void setName(string name) {
		this->name = name;
	}
	void setLastName(string lastName) {
		this->LastName = lastName;
	}
	const void setAge(int age) {
		this->Age = age;
	}

	string getName() {
		return name;
	}
	string getLastName() {
		return LastName;
	}
	int getAge() {
		return Age;
	}
	~Person() {
		name.clear();
		LastName.clear();
	}

};