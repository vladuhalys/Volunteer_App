#include "Login.h"

Login::Login(string name, string password, string surname, string email, string phone, string address, string city, string country)
{
	this->name = name;
	this->password = password;
	this->surname = surname;
	this->email = email;
	this->phone = phone;
	this->address = address;
	this->city = city;
	this->country = country;
}
void Login::set_name(string name)
{
	this->name = name;
}
void Login::set_password(string password)
{
	this->password = password;
}
void Login::set_surname(string surname)
{
	this->surname = surname;
}
void Login::set_email(string email)
{
	this->email = email;
}
void Login::set_phone(string phone)
{
	this->phone = phone;
}
void Login::set_address(string address)
{
	this->address = address;
}
void Login::set_city(string city)
{
	this->city = city;
}
void Login::set_country(string country)
{
	this->country = country;
}
string Login::get_name()
{
	return name;
}
string Login::get_password()
{
	return password;
}
string Login::get_surname()
{
	return surname;
}
string Login::get_email()
{
	return email;
}
string Login::get_phone()
{
	return phone;
}
string Login::get_address()
{
	return address;
}
string Login::get_city()
{
	return city;
}
string Login::get_country()
{
	return country;
}
void Login::check()
{

}
bool Email_check(string email)
{
	const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return regex_match(email, pattern);
}
void Login::sign_in()
{
}
void Login::sing_up()
{
}

Login::~Login()
{
	name.clear();
	password.clear();
	surname.clear();
	email.clear();
	phone.clear();
	address.clear();
	city.clear();
	country.clear();
}

