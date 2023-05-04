#include "../../library.h"
#include "../account/account.h"

class SignIn
{
private:
	string login;
	string password;
public:
	SignIn(string login, string password);

	void setLogin(string login);
	void setPassword(string password);
	string getLogin();
	string getPassword();
	bool checklogin(string login, vector<Account>a);
	bool checkpassword(string password, vector<Account>a);

	~SignIn();
};