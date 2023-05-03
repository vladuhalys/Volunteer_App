#include "../../../library.h"

class Login abstract {
protected:
	string password;
	string name;
	string surname;
	string email;
	string phone;
	string address;
	string city;
	string country;
public:
	Login(string name, string password, string surname, string email, string phone, string address, string city, string countru);
	virtual void set_name(string name);
	virtual void set_password(string password);
	virtual void set_surname(string surname);
	virtual void set_email(string email);
	virtual void set_phone(string phone);
	virtual void set_address(string address);
	virtual void set_city(string city);
	virtual void set_country(string country);
	string get_name();
	string get_password();
	string get_surname();
	string get_email();
	string get_phone();
	string get_address();
	string get_city();
	string get_country();

	virtual bool Email_check(string email);
	virtual void check() = 0;
	virtual void sign_in(string name, string password) = 0;
	virtual void sing_up() = 0;

	~Login();
};
