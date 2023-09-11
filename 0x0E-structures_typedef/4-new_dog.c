#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog  - check the code
 * @name : pointer
 * @age : pointer
 * @owner : pointer
 * Return:struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDogay = (dog_t *) malloc(sizeof(dog_t));

	if (newDogay == NULL)
	{
		return (NULL);
	}
	newDogay->name = name;
	newDogay->age = age;
	newDogay->owner = owner;
	strcpy((*newDogay).name, name);
	return (newDogay);
}
