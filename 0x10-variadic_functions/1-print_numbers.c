#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - check the code
 * @n:count
 * @separator: spac
 * Return: nothin
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned  int i = 0;

	va_start(ptr, n);
	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if ((i != n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
