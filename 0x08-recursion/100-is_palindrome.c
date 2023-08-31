#include "main.h"
/**
 *  helper - function that returns the natural square root of a number
 * @n: num
 * @i: num
 * Return: square root of a number
 */

int helper(char *s, int i, char *re) {
    if (i != strlen(s)) {
        int reversedChar = strlen(s) - i - 1;
        if (reversedChar >= 0) {
            re[i] = s[reversedChar];
        }
        i++;
        helper(s, i, re);
    } else {
        re[i] = '\0';
    }

    return 0;
}
/**
 *  is_palindrome - function that returns the natural square root of a number
 * @s: num
 * Return: square root of a number
 */
int is_palindrome(char *s) {
    char *reversed = (char *)malloc(strlen(s) + 1);
    helper(s, 0, reversed);
    if (strcmp(reversed, s) == 0) {
        free(reversed);
        return 1;
    }
    free(reversed);
    return 0;
}
