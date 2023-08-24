#include"main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i =0;
    while (i < n) {
        if (src[i] == '\0' ) {
            dest[i] = '\0';
            break;
        } else {
            dest[i] = src[i];
        }
        i++;
    }
     while (i <= n) {
        dest[i] = 0;
        i++;
        if(i == n)
        {
            break;
        }
    }
     while (i < 98) {
        dest[i] = '*';
        i++;
    }
    
    return dest;
}
