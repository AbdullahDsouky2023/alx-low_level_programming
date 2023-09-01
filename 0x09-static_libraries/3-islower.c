#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else if (!islower(c))
	{
		return (0);
	}
	return (0);
}
