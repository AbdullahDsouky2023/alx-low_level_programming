#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - function
 * @a : the char to know
 * @b : the char to know
*/
 void print_array(int *a, int n)
{
       int i = 0;
       while(i < n){
          printf("%d",a[i]);
	  if (i != (n-1))
	  {
		  putchar(',');
		  putchar(' ');
	  }
           i++;
       }
       putchar('\n');
}
