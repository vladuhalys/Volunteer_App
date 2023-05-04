#include "volunteer.h"
#include "../../../presentation/ShowInformation/ShowInformation.h"
#include "../../usecases/Buy/Buy.h"
#include "../../usecases/Send/Send.h"

// Fields
// Constructors
    Volunteer::Volunteer()
    {
        _goods = vector<Goods>();
        _statements = vector<Statement>();
    }
    Volunteer::Volunteer(const Volunteer& other)
    {
        this->_goods.clear();
        this->_statements.clear();
        std::copy(other._goods.begin(), other._goods.end(), std::back_inserter(this->_goods));
        std::copy(other._statements.begin(), other._statements.end(), std::back_inserter(this->_statements));
    }
    Volunteer::Volunteer(Volunteer&& other) noexcept
    {
        this->_goods.clear();
        this->_statements.clear();
        std::move(other._goods.begin(), other._goods.end(), std::back_inserter(this->_goods));
        std::move(other._statements.begin(), other._statements.end(), std::back_inserter(this->_statements));
    }
    Volunteer::~Volunteer()
    {
        _goods.clear();
        _statements.clear();
    }
// Methods
// Getters
    vector<Goods>& Volunteer::get_goods()
    {
        return _goods;
    }
    vector<Statement>& Volunteer::get_statements()
    {
        return _statements;
    }
// Setters
// Other
    void Volunteer::accept_goods(Goods& goods)
    {
        
    }
    void Volunteer::send_goods(const size_t& id)
    {
        SendProduct::Send(*this, id);
    }
    void Volunteer::confirm_goods(Goods& goods)
    {
        
    }
    Volunteer::Volunteer()
    {
        _goods = vector<Goods>();
        _statements = vector<Statement>();
    }
    Volunteer::Volunteer(const Volunteer& other)
    {
        this->_goods.clear();
        this->_statements.clear();
        std::copy(other._goods.begin(), other._goods.end(), std::back_inserter(this->_goods));
        std::copy(other._statements.begin(), other._statements.end(), std::back_inserter(this->_statements));
    }
    Volunteer::Volunteer(Volunteer&& other) noexcept
    {
        this->_goods.clear();
        this->_statements.clear();
        std::move(other._goods.begin(), other._goods.end(), std::back_inserter(this->_goods));
        std::move(other._statements.begin(), other._statements.end(), std::back_inserter(this->_statements));
    }
    Volunteer::~Volunteer()
    {
        _goods.clear();
        _statements.clear();
    }
// Methods
// Getters
    vector<Goods>& Volunteer::get_goods()
    {
        return _goods;
    }
    vector<Statement>& Volunteer::get_statements()
    {
        return _statements;
    }
// Setters
// Other
    void Volunteer::accept_goods(Goods& goods)
    {
        
    }
    void Volunteer::send_goods(const size_t& id)
    {
        SendProduct::Send(*this, id);
    }
    void Volunteer::confirm_goods(Goods& goods)
    {
        
    }