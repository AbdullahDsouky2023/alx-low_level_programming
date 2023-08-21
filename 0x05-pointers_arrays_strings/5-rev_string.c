#include "main.h"
#include <string.h>
/**
 *   rev_string - check the code
 *  @s: para to be used
 */

void   rev_string(char *s)
{
        int len = strlen(s);

        while(len >= 0)
        {
                _putchar(s[len]);
		len--;
        }

        _putchar('\n');
}
