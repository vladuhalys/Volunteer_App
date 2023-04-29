#include "client.h"

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
}

void Client::getVolunteerList(unsigned int id)
{
	this->id = id;
}

void Client::getCompanyList(unsigned int id)
{
	this->id = id;
}

void Client::getGoodsList(unsigned int id)
{
	this->id = id;
}



