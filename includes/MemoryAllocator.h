#pragma once

#include <iostream>
#include <stdlib.h>

class MemoryAllocator{
public:
	MemoryAllocator();
	~MemoryAllocator();
	
	bool Initialize();
	void Terminate();
	
	void *Alloc(unsigned int);
private:
	void HandleError(char *);
};
