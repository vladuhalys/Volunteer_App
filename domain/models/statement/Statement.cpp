#include "Statement.h"

// Fields

// Constructors
    Statement::Statement()
    {
        this->amount_ = nullptr;
        this->date_start_ = nullptr;
        this->date_end_ = nullptr;
        this->description_ = nullptr;
        this->failure_description_ = nullptr;
        this->isConfirmed_ = nullptr;
        this->isPaid_ = nullptr;
        this->needPayment_ = nullptr;
    }
    Statement::Statement(
            const string& dateStart,
            const string& description,
            const bool& needPayment, 
            const double& amount
            )
    {
        this->set_date_start(dateStart);
        this->set_description(description);
        this->set_need_payment(needPayment);
        this->set_amount(amount);
    }
    Statement::Statement(const Statement& other)
    {
        this->set_amount(other.get_amount());
        this->set_date_start(other.get_date_start());
        this->set_date_end(other.get_date_end());
        this->set_description(other.get_description());
        this->set_is_confirmed(other.get_is_confirmed());
        this->set_failure_description(other.get_failure_description());
        this->set_need_payment(other.get_need_payment());
        this->set_is_paid(other.get_is_paid());
    }
    Statement::Statement(Statement&& other) noexcept
    {
        this->set_amount(other.get_amount());
        this->set_date_start(other.get_date_start());
        this->set_date_end(other.get_date_end());
        this->set_description(other.get_description());
        this->set_is_confirmed(other.get_is_confirmed());
        this->set_failure_description(other.get_failure_description());
        this->set_need_payment(other.get_need_payment());
        this->set_is_paid(other.get_is_paid());
    }
    Statement::~Statement()
    {
        this->set_amount(0);
        this->set_date_start("");
        this->set_date_end("");
        this->set_description("");
        this->set_is_confirmed(false);
        this->set_failure_description("");
        this->set_need_payment(false);
        this->set_is_paid(false);
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
        set_is_confirmed(true);
        set_date_end(date);
    }
    void Statement::cancel(const string& date, const string& description)
    {
        set_is_confirmed(false);
        set_failure_description(description);
        set_date_end(date);
    }
    void Statement::pay(const double& amount)
    {
        if(this->get_is_paid() == false && this->get_need_payment() == true)
        {
            set_is_paid(true);
        }
        //else
        //{
        //    throw "Statement is already paid or doesn't need payment";
        //}
    }