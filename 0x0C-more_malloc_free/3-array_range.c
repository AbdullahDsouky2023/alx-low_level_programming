#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_rangeloc - array_range
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: array of int.
 */
int *array_range(int min, int max){
    int *ptr;
    int i = min;
    ptr = (int *) malloc(sizeof(int) * max + 1);
    if(ptr == NULL || min > max)
    {
        return (NULL);
    }
    while(i <= max)
    {
        ptr[i]=i;
        i++;
    }
    return (ptr);
}
