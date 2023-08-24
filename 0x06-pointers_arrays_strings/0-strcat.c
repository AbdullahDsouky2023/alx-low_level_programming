#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
char *_strcat(char *dest, char *src)
{
    int i=0;
    int j =0;
    int length =strlen(dest);
    int length2 =strlen(src);
       char *str2 = (char *)malloc((length + length2 + 1) * sizeof(char));

    while(dest[i] != '\0')
    {
       str2[i]=dest[i];
       i++;
    }
    while(j<=length2)
    {
    if(j==length2)
    {
        str2[i]='\0';
    }else {
                str2[i]=src[j];
    }
                j++;
                i++;

    }
strcpy(dest, str2); 
    free(str2); 
    return dest;
}
