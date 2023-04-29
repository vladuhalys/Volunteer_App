#include "../../../library.h"

class Login {
private:
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
	void set_name(string name);
	void set_password(string password);
	void set_surname(string surname);
	void set_email(string email);
	void set_phone(string phone);
	void set_address(string address);
	void set_city(string city);
	void set_country(string country);
	string get_name();
	string get_password();
	string get_surname();
	string get_email();
	string get_phone();
	string get_address();
	string get_city();
	string get_country();

	virtual void check() = 0;
	virtual void sign_in() = 0;
	virtual void sing_up() = 0;

	~Login();
};