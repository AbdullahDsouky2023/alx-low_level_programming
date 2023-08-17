#include "main.h"
/**
* print_line - function that print
* @n : how many _ will be printed
*/



void print_line(int n)
{
	int k = 0;

	while (k < n)
	{
		_putchar('_');
		k++;
	}
	_putchar('\n');
}
