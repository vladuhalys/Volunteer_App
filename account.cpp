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

void Account::set_id(uint32_t id) {
	this->id = id;
}
uint32_t Account::get_id() {
	return this->id;
}
void Account::set_nickname(string nickname) {
	this->nickname = nickname;
}
string Account::get_nickname() {
	return this->nickname;
}
void Account::set_email(string email) {
	this->email = email;
}
string Account::get_email() {
	return this->email;
}
void Account::set_password(string password) {
	this->password = password;
}
string Account::get_password() {
	return this->password;
}
void Account::set_phone_number(string phone_number) {
	this->phone_number = phone_number;
}
string Account::get_phone_number() {
	return this->phone_number;
}
