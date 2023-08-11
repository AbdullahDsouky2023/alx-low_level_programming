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
	int count = 57;
	int i = 48;
	
	while (i < count )
	{
		putchar(i);
		if(i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	
	putchar('\n');
	return (0);
}
