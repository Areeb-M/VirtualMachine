
#include "VirtualMachine.h"
#include "../helper/InitOptions.h"
#include "memory/Memory.h"

VirtualMachine::VirtualMachine(InitOptions options) {
	memory = new Memory(options.MAX_MEMORY);
}

VirtualMachine::~VirtualMachine() {

}

