#include <iostream>
#include "client.h"
#include "../statement/statement.h"
#include <vector>

using namespace std;

class StatementProvider {
public:
	StatementProvider() {}

	void createStatement(const string& dateStart, const string& description, const bool& needPayment, const double& amount) 
	{
		Statement statement(dateStart, description, needPayment, amount);
		cout << "Statement created with ID: " << statement.get_id().get_id() << endl;
	}

private:
	vector<Statement> statements_;
};

//save
//StatementProvider provider;
//provider.createStatement("2023-05-03", "Test statement", true, 100.0);



Client::Client()
{
}

Client::~Client()
{
}

//Might delete later

void Client::getDocument(string document)
{
	if (document.length() > 0)
		this->document = document;
	else
		throw exception("No document found");
}

void Client::getInformationAboutRequest(string documentInfo)
{
	if (documentInfo.length() > 0)
		this->documentInfo = documentInfo;
	else
		throw exception("No information about request found");


void Client::getVolunteerList()
{
	this->id = id;
}

void Client::getCompanyList()
{
	this->id = id;
}

void Client::getGoodsList()
{
	this->id = id;
}



