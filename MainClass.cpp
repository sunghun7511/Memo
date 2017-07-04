#include "includes/MemoClass.h"

int main(int argc, char *argv[]){
		
	MemoClass* memo;
	bool success;
	
	memo = new MemoClass;
	if(!memo){
		return 0;
	}
	
	success = memo->Initialize();
	if(success){
		memo->Run();
	}
	
	memo->Terminate();
	delete memo;
	memo = 0;
	
	return 0;
}
