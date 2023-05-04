#include "../company/company.h"
#include "../organization/organization.h"
#include "../volunteer/volunteer.h"


class SignUp : public Account {
private:
	string login;
	string email;
	string password;

public:

	SignUp(string login, string email, string password);
	void set_login(string login);
	void set_email(string email);
	void set_password(string password);
	string get_login();
	string get_password();
	string get_email();
	bool chek_email(string email);
	bool check_login(string login, vector<Account> a);
	Account* enter_login(const vector<Account> a);
	void enter_password(Account& account);
	~SignUp();
};