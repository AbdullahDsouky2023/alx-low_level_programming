#include <stdio.h>

/**
  *  main - Entry point
  *
  *  Description: 'the program's description'
  *
  *  Return: Always 0 (Success)
*/


int main(void)
{
	char hexDigits[] = "0123456789abcdef";
	int count = 16;
	int i = 0;

	while (i < count)
	{
		putchar(hexDigits[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
