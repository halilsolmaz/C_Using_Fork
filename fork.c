#include <stdio.h>
#include <unistd.h>

int main (){

	int pid;
	pid = fork(); // pid of the created child. 

	if(pid > 0){ // Parent knows the child pid value
	//parent process
	wait(NULL); // Parent waits for all child processes to finish. 
	printf("parent : %d my pid : %d\n",pid,getpid());
	}

	if(pid == 0){ //child does not know its own pid value.
	//child process
	printf("child: %d my pid : %d\n",pid,getpid());
	}

	if(pid < 0){
	//error
	}
	
}
