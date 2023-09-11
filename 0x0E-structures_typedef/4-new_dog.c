#include "dog.h"
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
 dog_t *new_dog_ptr;
    int name_len, owner_len;

    new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL) {
        return NULL;
    }

    name_len = strlen(name) + 1;
    owner_len = strlen(owner) + 1;

    new_dog_ptr->name = malloc(name_len);
    new_dog_ptr->owner = malloc(owner_len);

    if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL) {
        free(new_dog_ptr->name); 
        free(new_dog_ptr->owner);
        free(new_dog_ptr);
        return NULL;
    }

    strcpy(new_dog_ptr->name, name);
    new_dog_ptr->age = age;
    strcpy(new_dog_ptr->owner, owner);

    return new_dog_ptr;
}
