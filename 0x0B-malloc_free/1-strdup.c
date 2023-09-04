
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup- copy a string and return pointer
 * @str: tteh str to copy
 *
 * Return: pointer to str .
 */
char *_strdup(char *str)
{
	int length = 0;
	int i = 0;
	char *s;
	while (str[length] != '\0')
	{
		length++;
	}

	*s = (char *) malloc(sizeof(char) * length);
	while (i < length)
	{
		s[i] = str[i];
		i++;
	}
	
	s[i] = '\0';
	return (s);
}
