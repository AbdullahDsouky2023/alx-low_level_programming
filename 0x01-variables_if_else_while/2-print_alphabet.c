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

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(' ');
	return (0);

}