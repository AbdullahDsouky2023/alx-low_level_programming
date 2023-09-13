#include <stdio.h>

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @(*f)(char *) : pointer to functoin 
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
 f(name);
}
