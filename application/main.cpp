#include "../library.h"
#include "../domain/models/person/person.h"

int main()
{
	Person person;
	person.setName("Name");
	person.setLastName("LastName");
	person.setAge(18);
	cout << person.getName() << endl;
	cout << person.getLastName() << endl;
	cout << person.getAge() << endl;
	return 0;
}