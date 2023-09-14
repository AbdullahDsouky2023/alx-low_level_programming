#include <starg.h>
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	
        int sum = 0;

        if (n == 0)
        {
                return(0);
        }
        va_list nptr;
        va_start(nptr,n);
        while (i < n)
        {
                sum+=va_arg(nptr,n);
        }
        va_end(nptr);
        return (sum);
}
