#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if a character is alpha or not.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is alpha, 0 otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else if (!isalpha(c))
	{
		return (0);
	}
	return (0);
}
