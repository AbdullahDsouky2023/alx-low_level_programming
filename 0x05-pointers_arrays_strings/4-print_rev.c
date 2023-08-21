#include "main.h"
/**
 *  print_rev - check the code
 *  @s: para to be used
 */

void  print_rev(char *s)
{
        int len = _strlen(s);

        while(len > 0)
        {
                _putchar(s[len]);
        }

        _putchar('\n');
}
