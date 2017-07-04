#pragma once

#include <iostream>
#include "InputFlags.h"

class InputClass{
public:
	InputClass();
	~InputClass();
	
	bool Initialize();
	void Terminate();
	
	unsigned int GetInput();
private:
	unsigned int TranslateFlag();
};
