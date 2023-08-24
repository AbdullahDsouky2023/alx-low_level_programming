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
     while (i <= 98) {
       
             dest[i] = '*';
         if(i == 97)
        {
           dest[97] = 0;
           break;
        }
	 if(i == 98)
	 {
		 dest[98]='\0';
		 break;
	 }
        
        i++;
    }
    
    return dest;
}
