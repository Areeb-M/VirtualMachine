
#ifndef CORE_MEMORY_MEMORY_H_
#define CORE_MEMORY_MEMORY_H_

#include <stddef.h>

class Memory {
private:
	size_t free_pointer;
	size_t max_memory;

public:
	Memory(size_t max_memory);
	virtual ~Memory();

	void store_data(char* location, size_t destination, size_t data_size);
	char* load_data(size_t location, size_t data_size);

	size_t get_memory_pointer(size_t data_size);

	char* memory;
};

#endif /* CORE_MEMORY_MEMORY_H_ */
