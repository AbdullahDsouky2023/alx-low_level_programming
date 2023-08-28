#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
    int i =0;
    int length=n;
    while(i < length)
    {
   s[i]=b;
        i++;
    }
   return s;
}
