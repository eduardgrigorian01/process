#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>



int main(){


	pid_t pid;
	pid = fork();

	if(pid == 0){
		printf("Hello from Parent! %d\n", getpid());
	}else if(pid > 0){
		printf("Hello from Child! %d\n", getpid());
	} else{
		puts("Fork Failed");
	}


return 0;
}