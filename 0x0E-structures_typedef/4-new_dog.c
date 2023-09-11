#include "dog.h"
#include <stdlib.h>
/**
 * print_dog  - check the code
 * @d : pointer
 * Description :struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *newDogay =(dog_t *) malloc(sizeof(dog_t));
  if (newDogay == NULL)
  {
    return (NULL);
  }
  newDogay->name = name;
  newDogay->age = age;
  newDogay->owner = owner;
  return (newDogay);
}
