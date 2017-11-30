
#include <stddef.h>
#include <stdexcept>

#include "Memory.h"


Memory::Memory(size_t max_memory) {
	this->memory = new char[max_memory];

	this->free_pointer = 0;
	this->max_memory = max_memory;
}

size_t Memory::get_memory_pointer(size_t data_size){
	size_t old = free_pointer;
	free_pointer += data_size;
	if (free_pointer < max_memory)
		return old;
}

void Memory::store_data(char* location, size_t destination, size_t data_size){
	if(destination + data_size < free_pointer){
		for(size_t i = 0; i < data_size; ++i){
			memory[destination + i] = location + i;
		}
	} else {
		// Raise Out of Memory Exception
	}

}

char* Memory::load_data(size_t location, size_t data_size){
	if(location + data_size < free_pointer){
		char* memory_pointer = memory[location];
		return memory_pointer;
	} else {
		// Raise Trying to Read Unallocated Memory Exception
	}
}

Memory::~Memory() {
	delete[] memory;
}

