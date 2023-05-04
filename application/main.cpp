#include "../domain/models/SignIn/SignIn.h"

int main()
{
	SignIn* s = new SignIn("login", "password");
    cout << s->getLogin() << endl;
    cout << s->getPassword() << endl;
    s->setLogin("login2");
    s->setPassword("password2");
    cout << s->getLogin() << endl;
    cout << s->getPassword() << endl;
	return 0;
}