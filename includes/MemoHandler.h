#pragma once

#include <iostream>
#include "InputFlags.h"

class MemoHandler{
public:
	MemoHandler();
	~MemoHandler();
	
	bool Initialize();
	void Terminate();
	
	bool HandleInput(InputHandler*);
private:
	bool AddMemo(char *, int);
	bool RemoveMemo(int);
	bool EditMemo(int, char *, int);
private:
	MemoryAllocator *mAllocator;
	char** memos;
};
