#include <stdio.h>
#include "main.h"
char *leet(char* s) {
    int i = 0;
    char re[5] = {'a', 'e', 'o', 't', 'l'};
    char replacements[5] = {'4', '3', '0', '7', '1'};
    
    while (s[i] != '\0') {
        int j = 0;
        int found = 0; 
        
        while (j < 5) {
            if (s[i] == re[j]) {
                s[i] = replacements[j];
                found = 1;
                break; 
            }
            j++;
        }
        
        if (!found) {
            i++;
        }
    }
    return s;
}
