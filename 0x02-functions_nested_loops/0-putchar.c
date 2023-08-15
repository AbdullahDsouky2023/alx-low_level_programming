#include "main.h"
/**
 * main - Entry point
 *
 * Descritpion :' Function that print putchar char'
 *
 * Return: On success 0
*/

int main(void)
{
	char str[10] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
