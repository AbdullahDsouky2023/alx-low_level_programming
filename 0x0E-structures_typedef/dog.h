#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - dog
 * @name : name
 * @age : age
 * @owner : owner
 * Description : struct of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog_t struct dog;
#endif
