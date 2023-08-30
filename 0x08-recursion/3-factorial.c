#include "main.h"
/**
 * factorial- function that print statment
 *
 * @s: the statement to be printed
 * Return: factorial
 */

int factorial(int n)
{
    if(n < 0)
    {
        return -1;
    }
    if(n == 1){
        return (1);
    }
    else {
    return (n *factorial(n-1));

    }
}
