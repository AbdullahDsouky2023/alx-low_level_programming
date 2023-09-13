#include <stdio.h>
/**
 * int_index - search for an integer
 * @array: the array to check
 * @size: the size to check
 * @cmp: the cmp to check
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i =0;
  if (array && size && cmp)
  {
    if (size <= 0)
    {
      return (-1);
    }
  while(i < size)
    {
      if(cmp(array[i]))
      {
        return (i);
      }
      i++;
    }
  }
  return (-1);
}
