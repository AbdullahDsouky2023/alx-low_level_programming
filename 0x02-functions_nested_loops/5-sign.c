#include "main.h"
#include <ctype.h>

/**
 * print_sign - Checks if + or - or zero.
 *
 * @n: The character to be checked.
 *
 * Return: 1 if the character is +,-1 is - 0 otherwise.
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
