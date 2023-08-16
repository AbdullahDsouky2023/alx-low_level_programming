#include "main.h"
#include <ctype.h>

/**
 * print_alphabet_x10 - Entry point
 * 
 * Description :'function that uses put char in universe '
 * 
 * Return :Always 0 success
*/

int _islower(int c)
{
  if (islower(c) )
  {
    return (1);
  } else if (!islower(c))
  {
    return (0);
  }
  return 0;
}
