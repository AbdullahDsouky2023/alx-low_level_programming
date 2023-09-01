#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc :count
 * @argv : value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    
    int values[]={1,2,5,10,25};
    int i =0;
    int num = atoi(argv[1]);
    if(argc == 1)
    {
                        printf("Error\n" );
                        return (1); 

    }
    if(num < 0){
        return (0);
    }
    while (i < 5)
    {
        if (values[i] >= num)
        {
            if (values[i] == num)
            {
                printf(" equal %d\n", 1);
            }
            else
            {
              printf(" bigger %d\n", num- values[i-1]);
            }
        }
        else if (num > 25)
        {
            if (num % 25 == 0)
            {
                printf("Rounded value: %d\n", num / 25);
            }
            else
            {
                printf("Rounded value: %d\n", num / 25 + num % 25);
            }
        }
        i++;
    }
        return (0);
}
