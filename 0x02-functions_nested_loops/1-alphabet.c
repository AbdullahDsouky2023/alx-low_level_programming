#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description :'function that uses put char in universe '
 *
 * Return : void 1
*/

void print_alphabet(void)
{
	char str = 'a';

	while (str <= 'z')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
