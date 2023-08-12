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
	int firstDigit = 0;

	while (firstDigit < 9)
	{
		int secondDigit = firstDigit + 1;

		while (secondDigit <= 9)
		{
			putchar(firstDigit + '0');
			putchar(secondDigit + '0');
			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
