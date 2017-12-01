
#ifndef CORE_VIRTUALMACHINE_H_
#define CORE_VIRTUALMACHINE_H_

#include "../helper/InitOptions.h"
#include "memory/Memory.h"

class VirtualMachine {
public:
	VirtualMachine(InitOptions);
	virtual ~VirtualMachine();

	Memory* memory;
private:
	Memory* stack;



};

#endif /* CORE_VIRTUALMACHINE_H_ */
