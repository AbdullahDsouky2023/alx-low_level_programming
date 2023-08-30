#include "main.h"
/**
 *  _pow_recursion- function that print statment
 *
 * @x: the numbre to raise
 * @y: the power to raise to
 * Return: power
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
