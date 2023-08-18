#include "main.h"
/**
 *  print_square - prints a square, followed by a new line
 *  @size : s the size of the square
*/


void print_square(int size)
{
	int k = 0;

	while (k < size)
	{
		int i = 0;

		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		k++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
