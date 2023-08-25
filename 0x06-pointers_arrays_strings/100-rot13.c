#include <string.h>
#include "main.h"
#include <stdio.h>
char *rot13(char *s){
    char *replacement1="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *replacement2="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    
    int i = 0;
    while (i <strlen(s))
    {
        int j = 0;
        while (j < strlen(replacement1))
        {
        if (replacement1[j] == s[i]){
            
        s[i]=replacement2[j];
        }
        j++;
        }
        i++;
    }
    return (s);
}
