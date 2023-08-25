#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * rot13  - Concatenates two strings.
 * @s: The destination string.
 *
 * Return: Pointer to the concatenated string.
 */
char *rot13(char *s)
{
	char *replacement1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *replacement2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int length = strlen(s);

	while (i < length)
	{
		int j = 0;
		int reLength = strlen(replacement1);

		while (j < reLength)
		{
			if (replacement1[j] == s[i])
			{
				s[i] = replacement2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
