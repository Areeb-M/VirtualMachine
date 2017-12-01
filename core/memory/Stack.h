
#ifndef CORE_MEMORY_STACK_H_
#define CORE_MEMORY_STACK_H_

#include <stddef.h>

class Stack {
private:
	size_t max_memory;
public:
	Stack(size_t max_memory);
	virtual ~Stack();

	char* memory;
};

#endif /* CORE_MEMORY_STACK_H_ */
