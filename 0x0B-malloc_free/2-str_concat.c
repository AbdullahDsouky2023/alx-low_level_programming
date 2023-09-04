
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - copy a string and return pointer
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concat st or null .
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len1 = strlen(s1);
       int len2 = strlen(s2);	
    char *concatString =(char *) malloc(sizeof(char) *
     (strlen(s1) + strlen(s2)) +1 );
     
     if(concatString == NULL)
     {
         return (NULL);
     }
     int i =0;
     int j = 0;
     while (i < len1)
     {
         concatString[i] = s1[i];
         i++;
     }
     while (j < len2)
     {
         concatString[i] = s2[j];
         i++;
         j++;
     }
     concatString[i] ='\0';
     
     return (concatString);
}
