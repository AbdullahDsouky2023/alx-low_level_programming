#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using
 * @b : the interger to reserve to
 * Return: Always 0.
 */
 
void *malloc_checked(unsigned int b)
{
    int* ptr = malloc(sizeof(unsigned int));
    if(ptr == NULL)
    {
       exit(98);
    }
   return (ptr);
}
