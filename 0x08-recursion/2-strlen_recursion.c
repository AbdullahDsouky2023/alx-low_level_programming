#include "main.h"
/**
 *  _strlen_recursion - function that print statment
 *
 * @s: the statement to be printed
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
  return 0;
}
