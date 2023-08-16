#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print_last_digit
 *
 * @x: The character to be checked.
 *
 * Return:return last digit .
 */
int print_last_digit(int x)
{
	int lastDig;

	if (x < 0)
	{
		lastDig = -1 * (x % 10);
	}
	else
	{
		lastDig = (x % 10);
	}
	_putchar(lastDig + '0');
	return (lastDig);
}
