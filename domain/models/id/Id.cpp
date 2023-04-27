#include "Id.h"

unsigned int Id::id_counter = 0;

unsigned int Id::get_and_update_id_counter() {
	return Id::id_counter++;
}
