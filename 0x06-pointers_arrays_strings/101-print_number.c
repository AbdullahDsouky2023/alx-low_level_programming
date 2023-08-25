#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_number - Concatenates two strings.
 * @n: The destination string.
 *
 * Return: Pointer to the concatenated string.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
