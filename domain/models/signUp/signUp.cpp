#include "signUp.h"

SignUp::SignUp(string login, string email, string password) {
	this->login = login;
	this->email = email;
	this->password = password;
}
void SignUp::set_login(string login) {
	this->login = login;
}
void SignUp::set_email(string email) {
	this->email = email;
}
void SignUp::set_password(string password) {
	this->password = password;
}
string SignUp::get_login() {
	return this->login;
}
string SignUp::get_password() {
	return this->password;
}
string SignUp::get_email() {
	return this->email;
}
bool SignUp::check_login(string login, vector<Account> a) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i].get_nickname() == login) {
			return true;
		}
	}
	return false;
}
bool SignUp::check_password(string password) {

	if (password.length() < 8) {
		return false;
	}
	else if (password.length() > 16) {
		return false;
	}
	else if (password.find_first_of("0123456789") == string::npos) {
		return false;
	}
	else if (password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
		return false;
	}
	else if (password.find_first_of("abcdefghijklmnopqrstuvwxyz") == string::npos) {
		return false;
	}
	else if (password.find_first_of("!@#$%^&*()_+-=[]{};':,./<>?") == string::npos) {
		return false;
	}
	else {
		return true;
	}
}
bool SignUp::chek_email(string email){
	const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return regex_match(email, pattern);
}
Account * SignUp::enter_login(const vector<Account> a) {
	string login;
	string type;
	cout << "Enter login: ";
	cin >> login;
	cout << "Enter type(company, volunteer): ";
	cin >> login;
	if (check_login(login, a) == true) {
		cout << "Error: this login is already taken" << endl;
		return nullptr;
	}
	else {
		Account* account = nullptr;
		if (type == "volunteer")
		{
			account = new Volunteer();
		}
		else if (type == "organization")
		{
			account = new Organization();
		}
		else if (type == "company")
		{
			account = new Company();
		}
		else
		{
			cout << "Error: wrong type" << endl;
			return nullptr;
		}
		account->set_nickname(login);
		return account;
	}
}
void SignUp::enter_password(Account& account) {
	string password;
	cout << "Endel password: ";
	cin >> password;
	if (check_password(password) == true) {
		account.set_password(password);
	}
}
SignUp::~SignUp() {
	login.clear();
	email.clear();
    password.clear();
}
