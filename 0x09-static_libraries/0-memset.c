#include "main.h"

/**
 * _memset - fill memory
 * @s: the address of memory to print
 *
 * @b: the size of the memory to print
 * @n: the size of the memory to print
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int length = n;

	while (i < length)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
