#include <stdio.h>
#include <pthread.h>

void *threadFunction(void* args)
{
while(1)
{
printf("I am threadFunction.\n");
}
}
int main()
{
pthread_t id;
int ret;

ret=pthread_create(&id,NULL,&threadFunction,NULL);
if(ret==0){
printf("thread created successfully.\n");
pthread_create(&id,NULL,&threadFunction,NULL);
}
else
{
printf("thread not created.\n");
return 0;
}
return 0;
}
