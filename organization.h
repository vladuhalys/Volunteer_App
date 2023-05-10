#include <iostream>
#include <list>
#include <string>

using namespace std;

class Volunteer {
public:
    string name;
    int funds_received;
    int funds_spent;
    string project;
};

class Client {
public:
    string name;
    int funds_given;
    string item;
    string destination;
};

class Company {
public:
    string name;
    int funds_given;
};

class Organization {
public:
    list<Volunteer> volunteers;
    list<Client> clients;
    list<Company> companies;

    string makeReport() {
        string report = "Organization Report: \n";
        report += "Volunteers:\n";
        for (Volunteer v : volunteers) {
            report += "Name: " + v.name + ", Funds Received: " + to_string(v.funds_received) + ", Funds Spent: " + to_string(v.funds_spent) + ", Project: " + v.project + "\n";
        }
        report += "Clients:\n";
        for (Client c : clients) {
            report += "Name: " + c.name + ", Funds Given: " + to_string(c.funds_given) + ", Item: " + c.item + ", Destination: " + c.destination + "\n";
        }
        report += "Companies:\n";
        for (Company c : companies) {
            report += "Name: " + c.name + ", Funds Given: " + to_string(c.funds_given) + "\n";
        }
        return report;
    }

    string getAllVolunteers() {
        string volunteer_list = "Volunteers:\n";
        for (Volunteer v : volunteers) {
            volunteer_list += v.name + "\n";
        }
        return volunteer_list;
    }

    string getAllClients() {
        string client_list = "Clients:\n";
        for (Client c : clients) {
            client_list += c.name + "\n";
        }
        return client_list;
    }

    string getAllCompanies() {
        string company_list = "Companies:\n";
        for (Company c : companies) {
            company_list += c.name + "\n";
        }
        return company_list;
    }
};
