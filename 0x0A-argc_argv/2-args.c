#include <stdio.h>
/**
 * main - check the code
 * @argc :count
 * @argv : value
 * Return: Always 0.
 */
int main(int argc, char *argv[] )
{
        int i = 0;
        while(i < argc)
        {
            printf("%s\n",argv[i]);
            i++;
        }
        return (0);
}
