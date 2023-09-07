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
    void *ptr = malloc(sizeof(b));
    if(ptr == NULL)
    {
       exit(98);
    }
   return (ptr);
} 
