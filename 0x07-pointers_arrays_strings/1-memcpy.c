#include "main.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: the destination of memory to print
 * @src: the srouce  of the memory to print
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int ln = n;

	while (i < ln)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
