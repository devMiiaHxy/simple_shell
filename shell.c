#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{

	size_t pid;
	int waiter;

	pid = fork();
	if (pid == 0 && pid != -1)
	{

	char *path[] = {"/usr/bin", "-l", "cd", NULL};
	/* char *envp[] = {"/usr/bin/ls", NULL}; */

	char *Shell_name = " SHELL$ ";
	printf("%s", Shell_name);
	printf("\n");

	if (execve(path[0], argv, NULL) == -1)
	{
		perror("Hmm, something's wrong");
	}
	else
	{
		printf("%s", "error enc..");
	}

	}
	else
	{
		wait(&waiter);
		printf("done");
		printf("\n");

	}

	return (0);
}
