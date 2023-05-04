#include "SignIn.h"

SignIn::SignIn(string login, string password)
{
	this->login = login;
	this->password = password;
}
string SignIn::getLogin()
{
	return this->login;
}
string SignIn::getPassword()
{
	return this->password;
}
void SignIn::setLogin(string login)
{
	this->login = login;
}
void SignIn::setPassword(string password)
{
	this->password = password;
}
bool SignIn::checklogin(string login, vector<Account>a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i].get_nickname() == login)
		{
			return true;
		}
		else
		{
			cout << " Login is incorect! " << endl;
		}

	}
	
}
bool SignIn::checkpassword(string password, vector<Account>a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i].get_password() == password)
		{
			return true;
		}
		else
		{
			cout << " Password is incorect! " << endl;
		}

	}
	
}

SignIn::~SignIn()
{
	login.clear();
	password.clear();
}