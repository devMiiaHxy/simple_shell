#include "main.h"
#include <string.h>                                                                                                     #include <stdio.h>                                                                                                      #include <stdlib.h>

char **brkstr(char s[])
{
        char *t, **arr;
        int i, count = 1;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] == ' ')
                       count++;
        }

        arr = malloc(sizeof(char *) * (count + 1));
        if (arr == NULL)
                return (NULL);
        t = strtok(s, " \n");
        for (i = 0; t != NULL; i++)
        {
                arr[i] = t;
                t = strtok(NULL, " \n");
        }
        arr[count] = NULL;
        return (arr);
}
