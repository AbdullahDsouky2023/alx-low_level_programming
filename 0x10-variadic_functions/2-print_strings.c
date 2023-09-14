#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - check the code
 * @n:count
 * @separator:count
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned  int i = 0;
	char *state;

	va_start(ptr, n);
	while (i < n)
	{
		state = va_arg(ptr, char*);
		if (state == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", state);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
