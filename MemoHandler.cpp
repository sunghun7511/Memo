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
	
	unsigned int sig = iHandler->GetSignal();
	unsigned int amt = GetSize();
	
	if(sig == INPUT_NONE){
		printf("Please input valid command!\n\n");
		return false;
	}else if(sig == INPUT_PRINT_MEMO){
		printf("Now, memo's amount is %u\n", amt);
		printf("Input index what you want to see\n> ");
		
		unsigned int input = iHandler->GetInput();
		if(input >= amt){
			printf("Index is not valid\n");
			return false;
		}
		
		// nnnn
		
		printf("\n\n───────────────[ %d 번째 메모 ]───────────────\n", input);
		printf("%s", memos[input]);
		printf("\n\n───────────────[ %d 번째 메모 ]───────────────\n", input);
		return false;
	}else if(sig == INPUT_ADD_MEMO){
		
	}else if(sig == INPUT_REMOVE_MEMO){
		
	}else if(sig == INPUT_CLEAR_MEMO){
		
	}else if(sig == INPUT_SAVE_MEMO){
		
	}else if(sig == INPUT_EXIT){
		puts("Thank you for using!");
		return true;
	}else if(sig == INPUT_UNKNOWN){
		
	}else if(sig == ERROR_EXIT){
		
	}else{
		
	}
	
	return true;
}

unsigned int MemoHandler::GetSize(){
	
	return 0;
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
