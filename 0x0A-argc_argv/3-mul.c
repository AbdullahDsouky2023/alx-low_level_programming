#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 * @argc :count
 * @argv : value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    if (argc ==  1)
    {
        printf("Error\n");
    }
    else
    {
        printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
    }
        return (0);
}
