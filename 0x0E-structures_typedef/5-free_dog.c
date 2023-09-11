#include "dog.h"
#include <stdlib.h>
/**
 * free_dog  - check the code
 * @d : pointer
 * Return:struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
