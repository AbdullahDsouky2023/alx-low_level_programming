#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - dog
 * @name : name
 * @age : age
 * @owner : owner
 * Description : struct of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
