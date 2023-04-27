#include "library.h"
class Account
{
	private:
	 uint32_t id;
	 string nickname;
	 string email;
	 string password;
	 string phone_number;
	public:
	Account();
	~Account();
	void set_id(uint32_t id) {
		this->id = id;
	}
	uint32_t get_id() {
		return this->id;
	}
	void set_nickname(string nickname) {
		this->nickname = nickname;
	}
	string get_nickname() {
		return this->nickname;
	}
	void set_email(string email) {
		this->email = email;
	}
	string get_email() {
		return this->email;
	}
	void set_password(string password) {
		this->password = password;
	}
	string get_password() {
		return this->password;
	}
	void set_phone_number(string phone_number) {
		this->phone_number = phone_number;
	}
	string get_phone_number() {
		return this->phone_number;
	}
	
};

