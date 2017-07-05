#pragma once

#include <iostream>
#include "MemoHandler.h"
#include "InputClass.h"

class MemoClass{
public:
	MemoClass();
	~MemoClass();
	
	bool Initialize();
	void Run();
	void Terminate();
private:
	void PrintMenu();
private:
	MemoHandler* mHandler;
	InputClass* iHandler;
};
