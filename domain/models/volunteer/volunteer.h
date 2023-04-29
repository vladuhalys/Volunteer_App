#include "../person/person.h"
#include "../goods/Goods.h"

class Volunteer : public Person
{
public:
// Fields
    list<Goods> _goods;
// Constructors
    Volunteer();
    Volunteer(const Volunteer& other);
    Volunteer(Volunteer&& other) noexcept;
    ~Volunteer();


};