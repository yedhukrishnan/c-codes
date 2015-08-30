#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	printf("Process ID (PID) : %d\n", pid);
	if(pid < 0)
	{
		fprintf(stderr, "Fork failed");
		return 1;
	}
	else if(pid == 0)
	{
		execlp("/bin/date", "date", NULL);
	}
	else
	{
		wait(NULL);
		printf("Child complete\n");
	}
	return 0;
}
