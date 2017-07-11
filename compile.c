#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	puts("Start Compile...");
	int exit = system("g++ -o ./Memo InputClass.cpp MainClass.cpp MemoClass.cpp MemoHandler.cpp MemoryAllocator.cpp");
	printf("\n\nexit status : %d\n", exit);
	if(!exit)
		puts("Compile Finished\n");
	else
		puts("Compile Error!\n");
	return 0;
}
