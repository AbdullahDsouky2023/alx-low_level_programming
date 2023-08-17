#include "main.h"
/**
  *  main - Entry point
  *
  *  Description: 'the program's description'
  *
  *  @i :the parameter that wated to be tested
  *
  *  Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
        if (i  < 0)
                printf("%d is negative\n", i);
        else if (i > 0)
                printf("%d is positive\n", i);
        else
                printf("%d is zero\n", i);
}
