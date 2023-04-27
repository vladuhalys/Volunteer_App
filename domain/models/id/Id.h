#ifndef id_class
#define id_class

class Id
{
private:
	static unsigned int id_counter;
public:
	static unsigned int get_and_update_id_counter();
	Id() = default;
	~Id() = default;
};

#endif
