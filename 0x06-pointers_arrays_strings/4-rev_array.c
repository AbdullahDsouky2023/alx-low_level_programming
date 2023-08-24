#include <stdlib.h>
#include "main.h"
/**
 * reverse_array - Concatenates two strings.
 * @a: The destination string.
 * @n: The source string.
 *
 * Return: Pointer to the concatenated string.
 */
void reverse_array(int *a, int n)
{
  int i =n -1 ;
  int *b = (int *)malloc(n * sizeof(int));
  int j=0;
  int k=0;

  while (0 <= i)
  {
      b[j]=a[i];
      i--;
      j++;
  }
while(k < n){
    a[k]=b[k];
    k++;
}



}
