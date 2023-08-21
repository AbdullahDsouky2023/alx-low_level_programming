#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - function
 * @str : the char to know
*/
void puts_half(char *str)
{
	int le = strlen(str) - 1;
	int i = (le / 2) + 1;

	while (i <= (le))
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
