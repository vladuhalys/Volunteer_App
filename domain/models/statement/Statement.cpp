#include "Statement.h"

// Fields

// Constructors
    Statement::Statement()
    {

    }
    Statement::Statement(
            const string& dateStart,
            const string& description,
            const bool& needPayment, 
            const double& amount
            )
            {

            }
    Statement::Statement(const Statement& other)
    {

    }
    Statement::Statement(Statement&& other) noexcept
    {

    }
    Statement::~Statement()
    {

    }
// Methods
//        Getters
    const string& Statement::get_date_start() const
    {
        return *date_start_;
    }
    const string& Statement::get_date_end() const
    {
        return *date_end_;
    }
    const string& Statement::get_description() const
    {
        return *description_;
    }

    const bool& Statement::get_is_confirmed() const
    {
        return *isConfirmed_;
    }
    const string& Statement::get_failure_description() const
    {
        return *failure_description_;
    }

    const bool& Statement::get_need_payment() const
    {
        return *needPayment_;
    }
    const bool& Statement::get_is_paid() const
    {
        return *isPaid_;
    }
    const double& Statement::get_amount() const
    {
        return *amount_;
    }
//        Setters
// PROTECTED OR PRIVATE?
    void Statement::set_date_start(const string& date)
    {
        delete this->date_start_;
        this->date_start_ = new string(date);
    }
    void Statement::set_date_end(const string& date)
    {
        delete this->date_end_;
        this->date_end_ = new string(date);
    }
    void Statement::set_description(const string& description)
    {
        delete this->description_;
        this->description_ = new string(description);
    }

    void Statement::set_is_confirmed(const bool& isConfirmed)
    {
        delete this->isConfirmed_;
        this->isConfirmed_ = new bool(isConfirmed);
    }
    void Statement::set_failure_description(const string& description)
    {
        delete this->failure_description_;
        this->failure_description_ = new string(description);
    }

    void Statement::set_need_payment(const bool& needPayment)
    {
        delete this->needPayment_;
        this->needPayment_ = new bool(needPayment);
    }
    void Statement::set_is_paid(const bool& isPaid)
    {
        delete this->isPaid_;
        this->isPaid_ = new bool(isPaid);
    }
    void Statement::set_amount(const double& amount)
    {
        delete this->amount_;
        this->amount_ = new double(amount);
    }
//        Other
    void Statement::confirm(const string& date)
    {
        //set_is_confirmed(true);
        //set_date_end(date);
    }
    void Statement::cancel(const string& description)
    {

    }
    void Statement::pay(const double& amount)
    {

    }