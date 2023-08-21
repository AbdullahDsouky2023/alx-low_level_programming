#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - function
 * @str : the char to know
*/
void puts2(char *str)
{
	int i = 0;
	int le = strlen(str) - 1;

	while (i <= le)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
