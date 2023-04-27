#ifndef id_class
#define id_class

class Id
{
private:
	static unsigned int id_counter;
	static unsigned int id_counter_statements;
public:
	static unsigned int get_and_update_id_counter();
	static unsigned int get_and_update_id_counter_statements();
	Id() = default;
	~Id() = default;
};

#endif
