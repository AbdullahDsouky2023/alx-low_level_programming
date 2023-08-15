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
  int counter=0;
  while(counter<=9){
  char str='a';
  while(str <='z')
  {
    _putchar(str);
    str++;
  }
    _putchar('\n');
  if(str=='z'){
    str ='a';
  }
  counter++;
 
  }
}
