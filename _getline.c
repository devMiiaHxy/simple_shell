#include "main.h"
#include <stdio.h>
#include <unistd.h>

ssize_t _getline(char *content, size_t x, FILE *stream)
{
	return getline(&content, &x, stream);
}
