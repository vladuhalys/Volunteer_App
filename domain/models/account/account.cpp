#include "account.h"

Account::Account()
{
	id = 0;
	nickname = "";
	email = "";
	password = "";
	phone_number = "";
}
Account :: ~Account()
{
}

void Account::set_id(uint32_t id)  {
	if(id == 0)
	{
		cout << "Error: id must not be zero" << endl;
	}
	if(id < 0)
	{
		cout << "Error: id must be positive" << endl;
	}
	else
	{
		this->id = id;
	}
}
const uint32_t Account::get_id() {
	return this->id;
}
void Account::set_nickname(string nickname) {
	if (nickname == "")
	{
		cout << "Error: nickname must not be empty" << endl;
	}
	if (nickname.length() < 5)
	{
		cout << "Error: nickname must be at least 3 characters" << endl;
	}
	else if (nickname.length() > 15)
	{
		cout << "Error: nickname must be at most 16 characters" << endl;
	}
	else
	{
		this->nickname = nickname;
	}
}
const string Account::get_nickname() {
	return this->nickname;
}
void Account::set_email(string email) {
	if (email == "")
	{
		cout << "Error: nickname must not be empty" << endl;
	}
	else
	{
		this->email = email;
	}
}
const string Account::get_email() {
	return this->email;
}
void Account::set_password(string password) {
	if (password == "")
	{
		cout << "Error: password must not be empty" << endl;
	}
	if (password.length() < 8)
	{
		cout << "Error: password must be at least 8 characters" << endl;
	}
	else if (password.length() > 16)
	{
		cout << "Error: password must be at most 16 characters" << endl;
	}
	else
	{
		this->password = password;
	}
}
const string Account::get_password() {
	return this->password;
}
void Account::set_phone_number(string phone_number) {
	if (phone_number == "")
	{
		cout << "Error: phone number must not be empty" << endl;
	}
	if (phone_number.length() < 10)
	{
		cout << "Error: phone number must be at least 10 characters" << endl;
	}
	else if (phone_number.length() > 11)
	{
		cout << "Error: phone number must be at most 11 characters" << endl;
	}
	else
	{
		this->phone_number = phone_number;
	}
}
const string Account::get_phone_number() {
	return this->phone_number;
}
