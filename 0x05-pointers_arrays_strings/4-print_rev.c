#include "main.h"
#include <string.h>
/**
 *  print_rev - check the code
 *  @s: para to be used
 */

void  print_rev(char *s)
{
        int len = strlen(s);

        while(len >= 0)
        {
                _putchar(s[len]);
		len--;
        }

        _putchar('\n');
}
