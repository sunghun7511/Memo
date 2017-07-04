#include "includes/MemoClass.h"

MemoClass::MemoClass(){
}

MemoClass::~MemoClass(){
}

bool MemoClass::Initialize(){
	bool success;
	
	mHandler = new MemoHandler;
	if(!mHandler){
		return false;
	}
	
	success = mHandler->Initialize();
	if(!success){
		return false;
	}
	
	
	
	iHandler = new InputHandler();
	if(!iHandler){
		return false;
	}
	
	success = iHandler->Initialize();
	if(!success){
		return false;
	}
	
	return true;
}

void MemoClass::Run(){
	
	bool finish;
	
	finish = true;
	while(!finish){
		
		PrintMenu();
		
		bool success;
		
		success = mHandler->HandleInput(iHandler);
		if(success){
			finish = false;
		}
	}
	
}

void MemoClass::Terminate(){
	
	if(mHandler){
		mHandler->Terminate();
		free mHandler;
		mHandler = 0;
	}
	
	if(iHandler){
		iHandler->Terminate();
		free iHandler;
		iHandler = 0;
	}
	
}

void MemoClass::PrintMenu(){
	
}
