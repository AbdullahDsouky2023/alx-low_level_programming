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
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
