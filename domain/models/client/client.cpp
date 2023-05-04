#pragma once
#include <iostream>
#include "client.h"
#include "../statement/statement.h"
#include <vector>
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

//WIP - might delete later vv

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


	//WIP - might delete later ^^

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



