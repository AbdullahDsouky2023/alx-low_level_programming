#include "main.h"
/**
 *  _helper_prime - function that returns the natural square root of a number
 * @n: num
 * @i: num
 * Return: square root of a number
 */
int _helper_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_helper_prime(n, i + 1));
	}
}
/**
 *  is_prime_number - function that returns the natural square root of a number
 * @n: num
 * Return: square root of a number
 */
int is_prime_number(int n)
{
	return (_helper_prime(n, 2));
}
