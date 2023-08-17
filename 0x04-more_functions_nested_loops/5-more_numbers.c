#include "main.h"

/**
* more_numbers - checks is it is uppercase4 or not
*/




void more_numbers(void)
{
	int k = 0;

	while (k < 10)
	{
		int i = 0;

		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
			i++;
		}
		_putchar('\n');
		k++;
	}
}
