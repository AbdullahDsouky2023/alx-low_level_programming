#include "main.h"
#include <unistd.h>
/**
* _putchar - checks is it is uppercase4 or not 
*
* @c :the char to be printed
*/

int _putchar(char c)
{
  return (write(1,&c,1));
}
