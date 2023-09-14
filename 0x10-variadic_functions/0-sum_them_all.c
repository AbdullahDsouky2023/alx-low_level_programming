#include <stdarg.h>
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	
        int sum = 0;
	unsigned int i =0;
	va_list nptr;
	if (n == 0)
	{
		return(0);
	}
	va_start(nptr,n);
	while (i < n)
	{
		sum+=va_arg(nptr, int);
	}
	va_end(nptr);
	return (sum);
}
