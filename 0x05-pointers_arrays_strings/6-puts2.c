#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - function
 *
 * /
void puts2(char *str)
{
	int i = 0;
	int le = strlen(str) -1;

	while (i <= le)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
