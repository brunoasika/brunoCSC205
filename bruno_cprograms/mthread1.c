#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void* args)
{
	printf("the child process created this thread \n");
	return NULL;
	
	
}
int main()
{
	int gap;
	pthread_t pid;
	printf("before process created \n");
	fork();
	printf("after process created \n");
	gap = pthread_create(&pid, NULL, &childThread, NULL);
	
	if(gap==0)  {
		printf("child process before thread creation \n");
		pthread_create(&pid, NULL, &childThread, NULL);
		printf("child process after thread creation \n");
	}
	else{
		printf("parent process exist \n");
	}
	return 0;
}
