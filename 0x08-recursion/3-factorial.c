#include "main.h"
/**
 * factorial- function that print statment
 *
 * @n: the num to get the factorial to
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
