#include "main.h"
#include <stdio.h>
/**
 * _strchr - check the code
 * @s : the statement
 * @c :the start
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		i++;
	}
	return NULL;
}
