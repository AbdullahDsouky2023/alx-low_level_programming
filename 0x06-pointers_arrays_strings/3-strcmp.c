#include "main.h"
#include <string.h>
/**
 * _strcmp - Concatenates two strings.
 * @s1: The destination string.
 * @s2: The source string.
 *
 * Return: Pointer to the concatenated string.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int length = strlen(s1);
	int length2 = strlen(s2);
	int diff;

	while( i < length2 && i < length )
	{
		if(s1[i] == s2[i])
		{
			diff = 0 ;
		}
		else if (s1[i]!=s2[i])
		{
			diff = s1[i]-s2[i];
			break;
		}
		i++;
	}
	return diff;
}
