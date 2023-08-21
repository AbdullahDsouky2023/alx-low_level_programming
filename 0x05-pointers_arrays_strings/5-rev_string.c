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
	char temp;
	int i = 0;
	int k = len;

	while (i < (len))
	{
		temp = s[k];
		s[k] = s[i];
		s[i] = temp;
		k--;
		i++;
		if (k == (len / 2))
		{
			break;
		}
	}
}
