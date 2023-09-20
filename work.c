#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
<<<<<<< HEAD
	int i;
	int *waiter;
	pid_t pid;
	char* content, **arg;
	size_t x;
	/* char *val
	 char *newVal;
	 char **args; */
	
	(void) argv;

	while(1)
	{
	waiter = 0;

	/* argv = {NULL, NULL, NULL}; */
	x = 0;
	getline(&content, &x, stdin);
	arg = brkstr(content); 

	pid = fork();
	
	if (pid == 0)
	{
		for (i = 0; i < argc; i++)
		{
			if (execve(arg[0], arg, NULL) == -1)
			{	
				perror("something went wrong");
			}

			else
			{
				exit(EXIT_FAILURE);
			}
		}
	}

	else
	{	
		wait(waiter);
		printf("done\n");
	}
	}
	return (0);
=======
        int i, *waiter;
        pid_t pid;
        char* content, **arg;
        size_t x;
        (void) argv;

        while(1)
        {

        waiter = 0;
        x = 0;
        getline(&content, &x, stdin);
        arg = brkstr(content);

        pid = fork();
        if (pid == 0)
        {
                for (i = 0; i < argc; i++)
                {
                        if (execve(arg[0], arg, NULL) == -1)
                        {
                                perror("something went wrong");
                        }
                        else
                        {
                                exit(EXIT_FAILURE);
                        }
                }
        }

        else
        {
                wait(waiter);
                printf("done\n");
        }
        }
        return (0);
>>>>>>> origin/main
}
