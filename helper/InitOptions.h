
#ifndef HELPER_INITOPTIONS_H_
#define HELPER_INITOPTIONS_H_

#include <string>
#include <stddef.h>

using namespace std;

class InitOptions {
public:
	InitOptions(string commandLineArguments);
	virtual ~InitOptions();



	size_t MAX_MEMORY;
	size_t MAX_STACK_MEMORY;


};

#endif
