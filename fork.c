#include <stdio.h>
#include <unistd.h>

int main (){

	int pid;
	pid = fork();

	if(pid > 0){
	//parent
	wait(NULL); // parent, bütün childların işlerini bitirmesini bekler. 
	printf("parent : %d benim pid : %d\n",pid,getpid());
	}
	if(pid == 0){
	//child
	printf("child: %d benim pid : %d\n",pid,getpid());
	}
	if(pid < 0){
	//error
	}
	
}
