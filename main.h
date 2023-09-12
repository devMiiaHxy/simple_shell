#ifndef MAIN_H
#define MAIN_h

#include <stdio.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int execve(const char *pathname, char *const argv[], char *const envp[]);


#endif
