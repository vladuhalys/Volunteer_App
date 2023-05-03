#include "../domain/models/Login/Login.h"

class Child : public Login
{
private:
public:
	Child() : Login("name", "password", "surname", "email", "phone", "address", "city", "country") {
	}
	virtual void check() override {}
	void sign_in(string name, string password) override {}
	virtual void sing_up() override {}
	~Child() {
	}
};

int main()
{
	Login *l = new Child();
	string email = "example@gmail.com";
	bool is_valid_email = l->Email_check(email);

	if (is_valid_email) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	l->sign_in("name","12345");
	l->sing_up();
	return 0;
}