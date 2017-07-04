#pragma once

#include <iostream>

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
	InputHandler* iHandler;
};
