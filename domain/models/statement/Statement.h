#pragma once

#include "../../../library.h"
#include "../client/client.h"
#include "../id/Id.h"

class Statement
{
public:
// Fields

// Constructors
    Statement();
    Statement(
            const string& who,
            const Client& client, 
            const string& who,
            const Client& client, 
            const string& who,
            const Client& client, 
            const string& dateStart,
            const string& description,
            const bool& needPayment, 
            const double& amount
            );
    Statement(const Statement& other);
    Statement(Statement&& other) noexcept;
    ~Statement();
// Methods
//        Getters
    const Id& get_id() const;

    const string& get_who() const;
    const Client& get_client() const;

    const string& get_who() const;
    const Client& get_client() const;

    const string& get_who() const;
    const Client& get_client() const;

    const string& get_date_start() const;
    const string& get_date_end() const;
    const string& get_description() const;

    const bool& get_is_confirmed() const;
    const string& get_failure_description() const;

    const bool& get_need_payment() const;
    const bool& get_is_paid() const;
    const double& get_amount() const;
//        Setters
// ? PROTECTED OR PRIVATE?
    void set_who(const string& who);
    void set_client(const Client& client);

// ? PROTECTED OR PRIVATE?
    void set_who(const string& who);
    void set_client(const Client& client);

// ? PROTECTED OR PRIVATE?
    void set_who(const string& who);
    void set_client(const Client& client);

    void set_date_start(const string& date);
    void set_date_end(const string& date);
    void set_description(const string& description);

    void set_is_confirmed(const bool& isConfirmed);
    void set_failure_description(const string& description);

    void set_need_payment(const bool& needPayment);
    void set_is_paid(const bool& isPaid);
    void set_amount(const double& amount);
//        Other
    void confirm(const string& date);
    void cancel(const string& date, const string& description);
    void pay(const double& amount);
private:
// Fields
    Id id_;
    Id id_;
    Id id_;

    string* who_;
    Client* client_;
    string* who_;
    Client* client_;
    string* who_;
    Client* client_;

    string* date_start_;
    string* date_end_;
    string* description_;

    bool* isConfirmed_;
    string* failure_description_;

    bool* needPayment_;
    bool* isPaid_;
    double* amount_;
// Methods
};