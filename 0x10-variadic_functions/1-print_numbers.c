#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - check the code
 * @n:count
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
      va_list ptr;
     unsigned  int i = 0;
      va_start(ptr,n);
      while (i < n)
      {
          printf("%d",va_arg(ptr, int));
          if ((i != n-1) && (separator != NULL)  )
          {
          printf("%s",separator);
          }
          i++;
      }
      printf("\n");
      va_end(ptr);
}
