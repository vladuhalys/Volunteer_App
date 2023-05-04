#include "Statement.h"

// Fields

// Constructors
    template <typename T>
    Statement<T>::Statement()
    {
        this->who_ = new T(T());
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
    template <typename T>
    Statement<T>::Statement(
            const T& who,
            const Client& client, 
            const string& dateStart,
            const string& description,
            const bool& needPayment,
            const double& amount
            ) : Statement()
    {
        
        this->set_date_start(dateStart);
        this->set_description(description);
        this->set_need_payment(needPayment);
        this->set_amount(amount);
        id_.get_and_update_id_counter_statements();
    } 
    template <typename T>
    Statement<T>::Statement(const Statement& other)
    {
        this->set_who(other.get_who());
        this->set_to(other.get_to());
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
    template <typename T>
    Statement<T>::Statement(Statement&& other) noexcept
    {
        this->set_who(other.get_who());
        this->set_to(other.get_to());
        this->set_amount(other.get_amount());
        this->set_date_start(other.get_date_start());
        this->set_date_end(other.get_date_end());
        this->set_description(other.get_description());
        this->set_is_confirmed(other.get_is_confirmed());
        this->set_failure_description(other.get_failure_description());
        this->set_need_payment(other.get_need_payment());
        this->set_is_paid(other.get_is_paid());
    }
    template <typename T>
    Statement<T>::~Statement()
    {
        this->set_who(T());
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
    template <typename T>
    const T& Statement<T>::get_who() const
    {
        return *who_;
        return this->id_;
    }
    template <typename T>
    const Client& Statement<T>::get_client() const
    {
        return *client_;
    }

    template <typename T>
    const Id& Statement<T>::get_id() const
    {
        return id_;
    }

    template <typename T>
    const string& Statement<T>::get_date_start() const
    {
        return *date_start_;
    }
    template <typename T>
    const string& Statement<T>::get_date_end() const
    {
        return *date_end_;
    }
    template <typename T>
    const string& Statement<T>::get_description() const
    {
        return *description_;
    }

    template <typename T>
    const bool& Statement<T>::get_is_confirmed() const
    {
        return *isConfirmed_;
    }
    template <typename T>
    const string& Statement<T>::get_failure_description() const
    {
        return *failure_description_;
    }

    template <typename T>
    const bool& Statement<T>::get_need_payment() const
    {
        return *needPayment_;
    }
    template <typename T>
    const bool& Statement<T>::get_is_paid() const
    {
        return *isPaid_;
    }
    template <typename T>
    const double& Statement<T>::get_amount() const
    {
        return *amount_;
    }
//        Setters
// PROTECTED OR PRIVATE?
    template <typename T>
    void Statement<T>::set_who(const T& who)
    {
        delete this->who_;

        this->who_ = new T(who);
    }
    template <typename T>
    void Statement<T>::set_client(const Client& client)
    {
        delete this->client_;

        this->client_ = new Client(client);
    }

    template <typename T>
    void Statement<T>::set_date_start(const string& date)
    {
        delete this->date_start_;
        this->date_start_ = new string(date);
    }
    template <typename T>
    void Statement<T>::set_date_end(const string& date)
    {
        delete this->date_end_;
        this->date_end_ = new string(date);
    }
    template <typename T>
    void Statement<T>::set_description(const string& description)
    {
        delete this->description_;
        this->description_ = new string(description);
    }

    template <typename T>
    void Statement<T>::set_is_confirmed(const bool& isConfirmed)
    {
        delete this->isConfirmed_;
        this->isConfirmed_ = new bool(isConfirmed);
    }
    template <typename T>
    void Statement<T>::set_failure_description(const string& description)
    {
        delete this->failure_description_;
        this->failure_description_ = new string(description);
    }

    template <typename T>
    void Statement<T>::set_need_payment(const bool& needPayment)
    {
        delete this->needPayment_;
        this->needPayment_ = new bool(needPayment);
    }
    template <typename T>
    void Statement<T>::set_is_paid(const bool& isPaid)
    {
        delete this->isPaid_;
        this->isPaid_ = new bool(isPaid);
    }
    template <typename T>
    void Statement<T>::set_amount(const double& amount)
    {
        delete this->amount_;
        this->amount_ = new double(amount);
    }
//        Other
    template <typename T>
    void Statement<T>::confirm(const string& date)
    {
        set_is_confirmed(true);
        set_date_end(date);
    }
    template <typename T>
    void Statement<T>::cancel(const string& date, const string& description)
    {
        set_is_confirmed(false);
        set_failure_description(description);
        set_date_end(date);
    }
    template <typename T>
    void Statement<T>::pay(const double& amount)
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