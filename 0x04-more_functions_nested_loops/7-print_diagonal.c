#include "main.h"
/**
*  print_diagonal - print diagona
* @n :n of /
*/
void print_diagonal(int n)
{
	int k = 0;

	while (k < n)
	{
		int i = 0;

		while (i < k)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		k++;
	}
}
