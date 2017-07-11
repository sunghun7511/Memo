#include "includes/InputClass.h"

InputClass::InputClass(){
}

InputClass::~InputClass(){
}

bool InputClass::Initialize(){
	return true;
}

void InputClass::Terminate(){
}

unsigned int InputClass::GetSignal(){
	return TranslateFlag(GetInput());
}

unsigned int InputClass::GetInput(){
	unsigned int input = 0;
	
	scanf("%u", &input);
	ClearBuffer();
	
	return input;
}

unsigned int InputClass::TranslateFlag(const int flag){
	switch(flag){
		case 1:
			return INPUT_ADD_MEMO;
		case 2:
			return INPUT_REMOVE_MEMO;
		case 3:
			return INPUT_CLEAR_MEMO;
		case 4:
			return INPUT_SAVE_MEMO;
		case 5:
			return INPUT_PRINT_MEMO;
		case 6:
			return INPUT_EXIT;
		default:
			return INPUT_UNKNOWN;
	}
	return INPUT_NONE;
}

void InputClass::ClearBuffer(){
	char tmp;
	while((tmp = getchar()) != '\n' && tmp != EOF){}
}

void InputClass::HandleError(char *error){
	return;
}
