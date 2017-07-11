#include "includes/MemoryAllocator.h"

MemoryAllocator::MemoryAllocator(){
}

MemoryAllocator::~MemoryAllocator(){
}

bool MemoryAllocator::Initialize(){
	return true;
}

void MemoryAllocator::Terminate(){
}

void *MemoryAllocator::Alloc(unsigned int size){
	void *ptr;
	ptr = malloc(size);
	if(!ptr){
		HandleError((char *)"Allocate Error");
	}
	return ptr;
}

void MemoryAllocator::HandleError(char *error){
	std::cerr << "Error!\n " << error;
	exit(-1);
}
