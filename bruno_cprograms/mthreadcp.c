#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void *args)
{
	printf("the child process created this thread \n");
	return NULL;
	
}
int main()
{
	int myid, mypid;
	pthread_t pid, ppid;
	printf("before process created \n");
	if (fork() == 0){
		pthread_create( &childThread, NULL);
	
