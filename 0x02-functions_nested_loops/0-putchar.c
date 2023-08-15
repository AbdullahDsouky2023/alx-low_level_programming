#include <unistd.h>
#include "main.h"

/**
 *  main - Entry point
 * 
 * Description :'function that uses put char in universe '
 * 
 * Return :Always 0 success
*/

int _putchar(const char *c)
{

    return (write(1,c,8));
}
