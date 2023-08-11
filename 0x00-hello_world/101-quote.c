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
	char message[] = "and that piece of "
		"art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, message, sizeof(message) - 1);
	return (1);
}
