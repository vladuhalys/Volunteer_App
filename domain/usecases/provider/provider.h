#include <iostream>
#include "client.h"
#include "../statement/statement.h"
#include <vector>
#include "../../../library.h"

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

//Вот так можно будет вызвать метод createStatement из другого файла
// 
//save
//StatementProvider provider;
//provider.createStatement("2023-05-03", "Test statement", true, 100.0);