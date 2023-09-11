#include "dog.h"
#include <stdio.h>
/**
 * print_dog  - check the code
 * @d : pointer
 * Description :struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (*d).name == NULL ? "(nil)" : (*d).name);
	printf("Age: %f\n", !(*d).age  ? 0 : (*d).age);
	printf("Owner: %s\n", (*d).owner == NULL ? "(nil)" : (*d).owner);
}
