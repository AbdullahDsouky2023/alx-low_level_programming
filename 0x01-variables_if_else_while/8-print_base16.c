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
	char hexDigits[] = "0123456789abcdef"; // Hexadecimal digits
	int count = 16;
	
	for (int i = 0; i < count; i++)
	{
		putchar(hexDigits[i]);
	}

	putchar('\n');
	return (0);
}
