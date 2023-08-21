#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *   rev_string - check the code
 *  @s: para to be used
 */

void   rev_string(char *s)
{
        int len = strlen(s) - 1;
        while(len >= 0)
        {
                putchar(s[len]);
		len--;
        }

        putchar('\n');
}
