#include <stdio.h>
/*
 *
 * main - Entry point
 *
 * Description :"function for pringing statement"
 *
 * Return : Alawys 0 (Success)
*/
 int _putchar(char c);
int main()
{
    _putchar('f');
    return(0);
}
int _putchar(char c)
{
	return write(1,&c,1);
}
