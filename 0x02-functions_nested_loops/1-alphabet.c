#include "main.h"

/**
 *  main - Entry point
 * 
 * Description :'function that uses put char in universe '
 * 
 * Return :Always 0 success
*/

void print_alphabet(void){
  char str='a';
  int i=0;
  while(str<='z'){
    _putchar(str);
    str++;
  }
  _putchar('\n');
  return 0;
}
