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
	try
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].get_nickname() == login)
			{
				return true;
			}
		}
		throw exception("Login is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred : " << e.what() << endl;
		return false;
	try
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].get_nickname() == login)
			{
				return true;
			}
		}
		throw exception("Login is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred: " << e.what() << endl;
		return false;
	try
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].get_nickname() == login)
			{
				return true;
			}
		}
		throw exception("Login is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred : " << e.what() << endl;
		return false;
	try
	{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i].get_nickname() == login)
		{
			return true;
		}
		}
		throw exception("Login is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred: " << e.what() << endl;
		return false;
	try
	{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i].get_nickname() == login)
		{
			return true;
		}
		else
		}
		throw exception("Login is incorect!");
	}
	catch (exception& e)
		{
			cout << " Login is incorect! " << endl;
		}

		cout << "An error occurred : " << e.what() << endl;
		return false;
	try
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].get_nickname() == login)
			{
				return true;
			}
		}
		throw exception("Login is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred : " << e.what() << endl;
		return false;
	}
	
}
bool SignIn::checkpassword(string password, vector<Account>a)
{
	try
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].get_password() == password)
			{
				return true;
			}
		}
		throw exception("Password is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred: " << e.what() << endl;
		return false;
	try
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].get_password() == password)
			{
				return true;
			}
		}
		throw exception("Password is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred: " << e.what() << endl;
		return false;
	try
	{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i].get_password() == password)
		{
			return true;
		}
		}
		throw exception("Password is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred: " << e.what() << endl;
		return false;
	try
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].get_password() == password)
			{
				return true;
			}
		}
		throw exception("Password is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred: " << e.what() << endl;
		return false;
	try
	{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i].get_password() == password)
		{
			return true;
		}
		else
		}
		throw exception("Password is incorect!");
	}
	catch (exception& e)
		{
			cout << " Password is incorect! " << endl;
		}

		cout << "An error occurred: " << e.what() << endl;
		return false;
	try
	{
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i].get_password() == password)
			{
				return true;
			}
		}
		throw exception("Password is incorect!");
	}
	catch (exception& e)
	{
		cout << "An error occurred: " << e.what() << endl;
		return false;
	}
}

SignIn::~SignIn()
{
	login.clear();
	password.clear();
}