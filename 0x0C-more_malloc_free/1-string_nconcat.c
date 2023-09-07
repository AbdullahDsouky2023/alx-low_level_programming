#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - Write a function that concatenates two string
 * @s1 : first string
 * @s2 : second string
 * @n : n to concat
 * Return: Always 0.
 */
 
char *string_nconcat(char *s1, char *s2, unsigned int n)
 {
     char* conStr;
     int i = 0;
     int j =0;
     if (s1 == NULL)
     {
         s1="";
     }
     else if (s2 == NULL)
     {
         s2="";
     }
     conStr= (char *) malloc(strlen(s1) + strlen(s2) + 1);
     if (conStr == NULL)
     {
         return (NULL);
     }
     int length1 = strlen(s1);
     int length2 = strlen(s2);
     if (n >= length2)
     {
         n = length2;
     }
     while (i < length1)
     {
         conStr[i]=s1[i];
         i++;
     }
     while (j < n)
     {
         conStr[i]=s2[j];
         i++;
         j++;
     }
     return (conStr);
 }
