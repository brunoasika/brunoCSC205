#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	if (fork() == 0)
		if (fork() == 0)
			printf("job well done!! \n");
	return 0;
}
