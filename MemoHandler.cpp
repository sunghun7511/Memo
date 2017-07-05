#include "includes/MemoHandler.h"

MemoHandler::MemoHandler(){
}

MemoHandler::~MemoHandler(){
}

bool MemoHandler::Initialize(){
	bool success;
	
	mAllocator = new MemoryAllocator;
	if(!mAllocator){
		return false;
	}
	
	success = mAllocator->Initialize();
	if(!success){
		return false;
	}
	
	memos = (char **) mAllocator->Alloc(MAX_MEMO_SIZE);
	if(!memos){
		return false;
	}
	
	return true;
}

void MemoHandler::Terminate(){
	if(mAllocator){
		mAllocator->Terminate();
		delete mAllocator;
		mAllocator = 0;
	}
	
	if(memos){
		delete memos;
		memos = 0;
	}

}

bool MemoHandler::HandleInput(InputClass *iHandler){
	
	
	return true;
}

bool MemoHandler::AddMemo(char *memo, int memo_size){
	
	return true;
}

bool MemoHandler::RemoveMemo(int index){
	
	return true;
}

bool MemoHandler::EditMemo(int index, char *memo, int memo_size){
	
	return true;
}
