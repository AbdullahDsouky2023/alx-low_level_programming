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
	void *ptr2 = malloc(new_size);

	if (ptr2 == NULL)
	{
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL)
	{
		memcpy(ptr2, ptr, old_size);
		free(ptr);
	}
	return (ptr2);
}
