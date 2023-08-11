#include <unistd.h>
/**
  *  main - Entry point
  *
  *  Description: 'the program's description'
  *
  *  Return: Always 0 (Success)
*/


int main(void)
{
	char me[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, me, sizeof(me) - 1);
	return (1);
}
