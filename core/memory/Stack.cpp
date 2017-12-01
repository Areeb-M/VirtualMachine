
#include "Stack.h"

Stack::Stack(size_t max_memory) {
	this->memory = new char[max_memory];

	this->max_memory = max_memory;
}

Stack::~Stack() {
	delete[] memory;
}

