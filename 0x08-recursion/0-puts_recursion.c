#include "main.h"

/**
 * _puts_recursion - function that print statment
 *
 * @s: the statement to be printed
 * Return: nothing
 */
 
 void _puts_recursion(char *s)
{
	static int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i++]);
		_puts_recursion(s);
	}
}
