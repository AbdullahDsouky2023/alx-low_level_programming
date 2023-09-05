// #include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code for ALX School students.
 *@ac:ff
 * @av:fss
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

    int total_length = 0;
    int i;

    for (i = 0; i < ac; i++)
    {
        total_length += strlen(av[i]) + 1;
    }

    char *arr = (char *)malloc(total_length * sizeof(char));
    if (arr == NULL)
    {
        return NULL;
    }

    strcpy(arr, av[0]);

    for (i = 1; i < ac; i++)
    {
        strcat(arr, "\n");
        strcat(arr, av[i]);
    }

    return arr;
}
