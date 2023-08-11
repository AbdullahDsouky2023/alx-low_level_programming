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
	int count = 10;
	int i = 0;
	
	while (i < count )
	{
		putchar(i);
		if(i == 9)
			putchar('$');
		else
		{
			putchar(' ,');
		}
		i++;
	}
	
	putchar('\n');
	return (0);
}
