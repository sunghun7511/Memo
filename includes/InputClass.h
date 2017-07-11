#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "InputFlags.h"

class InputClass{
public:
	InputClass();
	~InputClass();
	
	bool Initialize();
	void Terminate();
	
	unsigned int GetSignal();
	unsigned int GetInput();
private:
	unsigned int TranslateFlag(const int);
	void ClearBuffer();
	void HandleError(char *);
};
