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
	int lastDig=x % 10;
	if(x < 0 )
	{
		lastDig=(-x) % 10;
	}
	return (printf("%d",lastDig));
}
