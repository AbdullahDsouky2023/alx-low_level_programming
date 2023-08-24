#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *cap_string(char *s)
{
    int i =0 ;
    while(s[i] != '\0')
    {
        if (s[i] == ' ' ||s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
            s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
            s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
            s[i] == '}') {
          if(s[i + 1] >= 'a' && s[i + 1] <= 'z'){
         putchar(s[i]);
         putchar('\n');
         s[i + 1] -=32;
              
          }
        
            
        }
        
        i++;
    }
  return s;
}
  
