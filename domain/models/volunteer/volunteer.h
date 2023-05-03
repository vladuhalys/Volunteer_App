#include "../person/person.h"
#include "../goods/Goods.h"
#include "../statement/Statement.h"

class Volunteer : public Person
{
public:
// Fields
    vector<Goods> _goods;
    list<Statement> _statements;
// Constructors
    Volunteer();
    Volunteer(const Volunteer& other);
    Volunteer(Volunteer&& other) noexcept;
    ~Volunteer();


};