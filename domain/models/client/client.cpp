#pragma once
#include <iostream>
#include <vector>
#include "client.h"
#include "../statement/statement.h"
#include "../../models/goods/Goods.h"
#include "../../models/volunteer/volunteer.h"
#include "../../models/company/company.h"
#include "../../../library.h"


Client::Client()
{
}

Client::~Client()
{
}

class VolunteerRequest {
public:
	// Constructors
	VolunteerRequest();
	VolunteerRequest(const std::string& who, const Client& client, const std::string& dateStart, const std::string& description, const std::vector<Goods>& goodsList, const std::vector<Statement>& statementList);
	VolunteerRequest(const VolunteerRequest& other);
	VolunteerRequest(VolunteerRequest&& other) noexcept;
	virtual ~VolunteerRequest();

	// Getters
	const std::string& get_who() const;
	const Client& get_client() const;
	const std::string& get_date_start() const;
	const std::string& get_description() const;
	const std::vector<Goods>& get_goods() const;
	const std::vector<Statement>& get_statements() const;

	// Setters
	void set_who(const std::string& who);
	void set_client(const Client& client);
	void set_date_start(const std::string& date);
	void set_description(const std::string& description);
	void set_goods(const std::vector<Goods>& goodsList);
	void set_statements(const std::vector<Statement>& statementList);

private:
	std::string* who_;
	Client* client_;
	std::string* date_start_;
	std::string* description_;
	std::vector<Goods>* goodsList_;
	std::vector<Statement>* statementList_;
};

class StatementRequest
{
public:
	// Constructors
	StatementRequest();
	StatementRequest(const string& who, const Client& client, const string& dateStart, const string& description, const double& amount);
	StatementRequest(const StatementRequest& other);
	StatementRequest(StatementRequest&& other) noexcept;
	virtual ~StatementRequest();
	// Getters
	const string& get_who() const;
	const Client& get_client() const;
	const string& get_date_start() const;
	const string& get_description() const;
	const double& get_amount() const;

	// Setters
	void set_who(const string& who);
	void set_client(const Client& client);
	void set_date_start(const string& date);
	void set_description(const string& description);
	void set_amount(const double& amount);
private:
	string* who_;
	Client* client_;
	string* date_start_;
	string* description_;
	double* amount_;
};

void requestGoods(Goods goods)
{
	goodsRequest.push_back(goods);
}

	class ViewVolunteer
	{
	public:
		// Fields
		// Constructors
		// Methods
		//      Getters
		//      Setters
		//      Others
		static void view(vector<Volunteer>& volunteer_, size_t id)
		{
			try
			{
				cout << volunteer_.at(id).getName() << endl;
				cout << volunteer_.at(id).getLastName() << endl;
				cout << volunteer_.at(id).getAge() << endl;
			}
			catch (const std::exception& e)
			{
				cerr << e.what() << '\n';
			}
		}
	private:
		// Fields
		// Methods
	};

	class ViewCompany
	{
	public:
		// Fields
		// Constructors
		// Methods
		//      Getters
		//      Setters
		//      Others
		static void view(vector<Company>& company_, size_t id)
		{
			try
			{
				cout << company_.at(id).getName() << endl;
				cout << company_.at(id).getType() << endl;
				cout << company_.at(id).getTerminDelivery() << endl;
			}
			catch (const std::exception& e)
			{
				cerr << e.what() << '\n';
			}
		}
	private:
		// Fields
		// Methods
	};

	class ViewProduct
	{
	public:
		// Fields
		// Constructors
		// Methods
		//      Getters
		//      Setters
		//      Others
		static void view(vector<Goods>& goods_, size_t id)
		{
			try
			{
				cout << goods_.at(id).getName() << endl;
				cout << goods_.at(id).getDescription() << endl;
				cout << goods_.at(id).getPrice() << endl;
				cout << goods_.at(id).getQuantity() << endl;
			}
			catch (const std::exception& e)
			{
				cerr << e.what() << '\n';
			}
		}
	private:
		// Fields
		// Methods
	};



