#include "../../../library.h"
class Account abstract
{
	private:
	 uint32_t id;
	 string nickname;
	 string email;
	 string password;
	 string phone_number;
	public:
	Account();
	virtual ~Account();
	virtual void set_id(uint32_t id);
	const uint32_t get_id();
	virtual void set_nickname(string nickname);
	const string get_nickname();
	virtual void set_email(string email);
	const string get_email();
	virtual void set_password(string password);
	const string get_password();
	virtual void set_phone_number(string phone_number);
	const string get_phone_number();
	
};

