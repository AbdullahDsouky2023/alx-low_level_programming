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
    int num;
    if(argc < 2 )
    {
                        printf("Error\n");
                        return (1); 

    }
   
    num = atoi(argv[1]);
    if(num < 0){
	    printf("%d\n",0);
        return (0);
    }
    while (i < 5)
    {
        if (values[i] >= num)
        {
            if (values[i] == num)
            {
                printf("%d\n", 1);
		break;
            }
            else
            {
              printf("%d\n", num- values[i-1]);
	      break;
            }
        }
        else if (num > 25)
        {
            if (num % 25 == 0)
            {
                printf("%d\n", num / 25);
		break;
            }
            else
            {
                printf("%d\n", num / 25 + num % 25);
		break;
            }
        }
        i++;
    }
        return (0);
}
