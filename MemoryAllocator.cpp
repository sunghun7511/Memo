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
		HandleError();
	}
	return ptr;
}

void MemoryAllocator::HandleError(){
	
}
