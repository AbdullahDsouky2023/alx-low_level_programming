#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * 
 * Description :'function that uses put char in universe '
 * 
 * Return :Always 0 success
*/

void print_alphabet_x10(void)
{
  char str='a';
  int counter=0;
  
  while(str<='z')
  {
    _putchar(str);
    str++;
  if(str == 'z' && counter != 9)
  {
  _putchar('\n');
    str='a';
    counter++;
  }
  }
}
