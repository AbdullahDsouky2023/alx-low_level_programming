#include "main.h"
/**
 * _print_rev_recursion - function that print statment
 *
 * @s: the statement to be printed
 * Return: nothing
 */
 
void _print_rev_recursion(char *s)
{
 if(*s != '\0')
    {
        _print_rev_recursion(s+1);
        _putchar((s[0]));
    }else {
        
    }
}
