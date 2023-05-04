#pragma once
#include "../person/person.h"
#include "../goods/Goods.h"
#include "../statement/Statement.h"

class Volunteer : public Person
{
public:
// Fields
// Constructors
    Volunteer();
    Volunteer(const Volunteer& other);
    Volunteer(Volunteer&& other) noexcept;
    ~Volunteer();
// Operators
    Volunteer& operator=(Volunteer& other) = default;
    Volunteer& operator=(Volunteer&& other) = default;
// Methods
// Getters
    vector<Goods>& get_goods();
    list<Statement>& get_statements();
// Setters
// Other
    void accept_goods(Goods& goods);
    void send_goods(const size_t& id);
    void confirm_goods(Goods& goods);
private:
// Fields
    vector<Goods> _goods;
    list<Statement> _statements;
// Methods
};