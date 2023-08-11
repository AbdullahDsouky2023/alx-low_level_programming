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
        char ch = 'a';
	char Cch = 'A';

        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }
	while (Cch <= 'Z')
	{
		putchar(Cch);
		Cch++;
	}
        putchar('\n');
        return (0);

}
