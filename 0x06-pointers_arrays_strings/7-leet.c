#include <stdio.h>
#include "main.h"
char *leet(char* s) {
 int i = 0;
    char re[5] = {'a', 'e', 'o', 't', 'l'};
    char re2[5] = {'A', 'E', 'O', 'T', 'L'};
    char replacements[5] = {'4', '3', '0', '7', '1'};
    
    while (s[i] != '\0') {
        int j = 0;// Flag to indicate if a replacement was made
        
        while (j < 5) {
            if (s[i] == re[j] || s[i]==re2[j]) {
                s[i] = replacements[j];
          
            }
            j++;
        }
        
       i++;
    }
    return s;
}
