#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array_range
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: array of int.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = min;
	int num;

	ptr = (int *) malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL || min > max)
	{
		return (NULL);
	}
	num = max - min + 1;
	while (i < num)
	{
		ptr[i] = i + min;
		i++;
	}
	return (ptr);
}
