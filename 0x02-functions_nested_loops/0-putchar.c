#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void){
  char str[10]="_putchar";
  int i=0;
  while(i<=7){
    _putchar(str[i]);
    i++;
  }
  return 0;
}
