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
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
     while (i <= n+8) {
       
        dest[i] = '*';
         if(i == n+8)
        {
           dest[n+7] = '\0';
           break;
           
        }
        
        i++;
    }
    
    return dest;}
