#include "main.h"
#include <stdio.h>
 char *_strchr(char *s, char c)
 {
     char temp[]="fdf";
     int i =0;
     int start=0;
     int j=0;
     while (s[i] != '\0')
     {
         if(s[i] == c){
         start =i;
         break;
         }
         i++;
     }
     while (s[start] != '\0')
     {
         temp[j]=s[start];
         putchar(temp[j]);
         start++;
         j++;
     }
     return temp;
    //  printf("%s",temp);
 }
