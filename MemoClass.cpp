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
	
	
	
	iHandler = new InputClass();
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
	
	finish = false;
	while(!finish){
		
		PrintMenu();
		
		bool exit;
		
		exit = mHandler->HandleInput(iHandler);
		if(exit){
			finish = true;
		}
	}
	
}

void MemoClass::Terminate(){
	
	if(mHandler){
		mHandler->Terminate();
		delete mHandler;
		mHandler = 0;
	}
	
	if(iHandler){
		iHandler->Terminate();
		delete iHandler;
		iHandler = 0;
	}
	
}

void MemoClass::PrintMenu(){
	std::cout << "┌──────────────────────────────────┐\n";
	std::cout << "│                                  │\n";
	std::cout << "│          1. 메모 만들기          │\n";
	std::cout << "│          2. 메모 지우기          │\n";
	std::cout << "│          3. 메모 초기화          │\n";
	std::cout << "│          4. 메모 저장            │\n";
	std::cout << "│          5. 메모 보기            │\n";
	std::cout << "│          6. 종료                 │\n";
	std::cout << "│                                  │\n";
	std::cout << "└──────────────────────────────────┘\n";
	std::cout << "\n\n> ";
}
