#include "dog.h"

/**
 * init_dog  - check the code
 * @d : pointer
 * @name : name
 * @age :age
 * @owner :owner
 * Description :struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
