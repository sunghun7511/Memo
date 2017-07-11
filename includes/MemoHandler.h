#pragma once

#include <iostream>
#include "InputFlags.h"
#include "InputClass.h"
#include "MemoryAllocator.h"

enum{MAX_MEMO_SIZE = 100};


class MemoHandler{
public:
	MemoHandler();
	~MemoHandler();
	
	bool Initialize();
	void Terminate();
	
	bool HandleInput(InputClass*);
	unsigned int GetSize();
private:
	bool AddMemo(char *, int);
	bool RemoveMemo(int);
	bool EditMemo(int, char *, int);
private:
	MemoryAllocator *mAllocator;
	char** memos;
};
