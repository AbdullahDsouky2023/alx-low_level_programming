#include "main.h"
/**
 * string_toupper  - Concatenates two strings.
 * @str: The destination string.
 *
 * Return: Pointer to the concatenated string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}
