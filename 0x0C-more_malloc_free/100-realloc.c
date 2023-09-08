#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _realloc - check the code for
 * @ptr :pointer
 * @old_size : old
 * @new_size : new size
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	size_t min_size;

	if(new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
       	min_size = (old_size < new_size) ? old_size : new_size;
	if (ptr != NULL)
	{
		memcpy(ptr2, ptr, min_size);
		free(ptr);
	}
	return (ptr2);
}
