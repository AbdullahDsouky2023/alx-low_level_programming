#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>


/**
 * main - check the code for
 * @argc :pointer
 * @argv : old 
 * Return: Always 0.
 */
 

int main(int argc,char *argv[])
{   
    int num1, num2 , mul;
    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }
    if(!isdigit(num1) || !isdigit(num2))
    {
        printf("Error\n");
        exit(98);
    }
     num1 = atoi(argv[1]);
     num2 = atoi(argv[2]);
     mul = num1 * num2;
    return mul;
}
