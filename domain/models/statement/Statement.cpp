#include "Statement.h"

// Fields

// Constructors
    Statement::Statement()
    {
        this->who_ = new string("");
        this->client_ = new Client(Client());
        this->amount_ = new double {0};
        this->date_start_ = new string {""};
        this->date_end_ = new string {""};
        this->description_ = new string {""};
        this->failure_description_ = new string {""};
        this->isConfirmed_ = new bool{false};
        this->isPaid_ = new bool{false};
        this->needPayment_ = new bool{false};
        id_.get_and_update_id_counter_statements();
    }
    Statement::Statement(
            const string& who,
            const Client& client, 
            const string& dateStart,
            const string& description,
            const bool& needPayment,
            const double& amount
            ) : Statement()
    {
        this->set_who(who);
        this->set_client(client);
        this->set_date_start(dateStart);
        this->set_description(description);
        this->set_need_payment(needPayment);
        this->set_amount(amount);
        id_.get_and_update_id_counter_statements();
    } 
    Statement::Statement(const Statement& other)
    {
        this->set_who(other.get_who());
        this->set_client(other.get_client());
        this->set_amount(other.get_amount());
        this->set_date_start(other.get_date_start());
        this->set_date_end(other.get_date_end());
        this->set_description(other.get_description());
        this->set_is_confirmed(other.get_is_confirmed());
        this->set_failure_description(other.get_failure_description());
        this->set_need_payment(other.get_need_payment());
        this->set_is_paid(other.get_is_paid());
        this->id_.get_and_update_id_counter_statements();
    }
    Statement::Statement(Statement&& other) noexcept
    {
        this->set_who(other.get_who());
        this->set_client(other.get_client());
        this->set_amount(other.get_amount());
        this->set_date_start(other.get_date_start());
        this->set_date_end(other.get_date_end());
        this->set_description(other.get_description());
        this->set_is_confirmed(other.get_is_confirmed());
        this->set_failure_description(other.get_failure_description());
        this->set_need_payment(other.get_need_payment());
        this->set_is_paid(other.get_is_paid());
        this->id_.get_and_update_id_counter_statements();
    }
    Statement::~Statement()
    {
        this->who_->clear();
        this->set_client(Client());
        this->set_amount(0);
        this->date_start_->clear();
        this->date_end_->clear();
        this->description_->clear();
        this->set_is_confirmed(false);
        this->failure_description_->clear();
        this->set_need_payment(false);
        this->set_is_paid(false);
    }
// Methods
//        Getters
    const string& Statement::get_who() const
    {
        return *who_;
        return this->id_;
    }
    const Client& Statement::get_client() const
    {
        return *client_;
    }

    const Id& Statement::get_id() const
    {
        return id_;
    }

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
    void Statement::set_who(const string& who)
    {
        delete this->who_;

        this->who_ = new string(who);
    }
    void Statement::set_client(const Client& client)
    {
        delete this->client_;

        this->client_ = new Client(client);
    }

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