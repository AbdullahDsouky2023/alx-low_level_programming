#include <stdio.h>
/**
 *   main - Entry point
 *
 *   Decription : 'function for priing the alphabet'
 *
 *   Return :0 (Success)
*/

int main(void)
{
	char ch = 'a';

	putchar(' ');
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);

}
