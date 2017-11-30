
#include <stddef.h>
#include <stdexcept>

#include "Memory.h"


Memory::Memory(size_t max_memory) {
	this->memory = new char[max_memory];

	this->free_pointer = 0;
	this->max_memory = max_memory;
}

size_t Memory::get_memory_pointer(size_t data_size){
	size_t old = free_pointer;  // memory location to return in case check is successful
	free_pointer += data_size;
	if (free_pointer < max_memory)  // check if requested memory exists
		return old;
	// raise out of memory exception
}

void Memory::store_data(char* location, size_t destination, size_t data_size){
	if(destination + data_size < free_pointer){  // check is requested space exists
		for(size_t i = 0; i < data_size; ++i){
			memory[destination + i] = location[i]; // copy data over from source to memory
		}
	} else {  // resort to default
		// raise out of memory exception
	}
}

char* Memory::load_data(size_t location, size_t data_size){
	if(location + data_size < free_pointer){  // check if requested memory exists
		char* memory_pointer = &memory[location];  // create a pointer to that location in the memory array
		return memory_pointer;
	} else {
		// raise trying to read unallocated memory exception
	}
}

Memory::~Memory() {
	delete[] memory;
}

