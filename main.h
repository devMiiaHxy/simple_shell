#ifndef MAIN_H
#define MAIN_h

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int execve(const char *pathname, char *const argv[], char *const envp[]);
char *getenv(const char *name);
int putenv(char *string);
int _print(const char *format);
ssize_t _getline(char *content, size_t x, FILE *stream);
char *strtok(char *str, const char *delim);
pid_t wait(int *wstatus);
char* _brk(char *s, char *t);
char **brkstr(char s[]);


#endif
