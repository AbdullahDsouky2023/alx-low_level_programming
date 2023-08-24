#include"main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i=0;

	while(src[i] != '\0')
	{
		dest[i]=src[i];
		i++;
	}
	return dest;
}
