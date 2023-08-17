#include "main.h"
/**
* print_line - function that print
*/


void print_line(int n)
{
	int k = 0;

	while (k < n)
	{
		int i =0;

		while(i<k)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
		k++;
	}
}
