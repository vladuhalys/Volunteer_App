#include "../account/account.h"

class Person: public Account {
private:
	string name;
	string lastName;
	int age;
public:

	void setName(string name);
	void setLastName(string lastName);
	const void setAge(int age);

	const string getName();
	const string getLastName();
	const int getAge();
	~Person();
};