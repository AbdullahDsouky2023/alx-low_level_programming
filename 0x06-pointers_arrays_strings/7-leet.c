#include <stdio.h>
#include "main.h"
/**
 * leet - Convert characters in a string to leet speak.
 * @s: The input string to be converted.
 *
 * This function takes an input string and replaces certain characters
 * with their leet speak equivalents based on predefined replacements.
 * It performs a case-insensitive conversion for 'a', 'e', 'o', 't', and 'l'.
 *
 * Return: A pointer to the modified input string.
 */
char *leet(char *s) {
    int i = 0;
    char re[5] = {'a', 'e', 'o', 't', 'l'};
    char re2[5] = {'A', 'E', 'O', 'T', 'L'};
    char replacements[5] = {'4', '3', '0', '7', '1'};
    
    while (s[i] != '\0') {
        int j = 0;
        
        while (j < 5) {
            if (s[i] == re[j] || s[i] == re2[j]) {
                s[i] = replacements[j];
            }
            j++;
        }
        
        i++;
    }
    return s;
}

int main() {
    char input[] = "leet";
    printf("Original: %s\n", input);
    
    char *result = leet(input);
    printf("Leet Speak: %s\n", result);

    return 0;
}
