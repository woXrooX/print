#ifndef PRINT
#define PRINT
#include <unistd.h>

namespace woXrooX{
	size_t strlen(const char* string) {
		const char* pointer = string;

		while(*pointer != '\0') pointer++;

		return pointer - string;
	}

	bool print(const char* buffer){
		size_t len = strlen(buffer);
		if(write(1, buffer, len) < 0) return false;
		else return true;
	}
}
#endif
