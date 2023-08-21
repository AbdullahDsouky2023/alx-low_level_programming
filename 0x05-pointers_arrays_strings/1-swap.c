#include "main.h"
/**
 * swap_int - function
 * @a : first int
 * @b :second int
*/


void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
