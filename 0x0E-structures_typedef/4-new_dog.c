#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog  - check the code
 * @name : pointer
 * @age : pointer
 * @owner : pointer
 * Return:struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDogay = malloc(sizeof(dog_t));
	if (newDogay == NULL)
	{
		return (NULL);
	}
	newDogay->name = malloc(strlen(name) + 1);
	newDogay->owner = malloc(strlen(owner) + 1);
	
	strcpy(newDogay->name, name);
	newDogay->age = age;
	strcpy(newDogay->owner , owner);
	return (newDogay);
}
