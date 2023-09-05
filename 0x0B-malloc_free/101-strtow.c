#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
    int i = 0;
    int k = 0;
    int count = 0;
    int words = 0;
    char **arr;
    int length =strlen(str);
    if(str == NULL)
    {
    return (NULL);
    }
    while (i < length)
    {
        if (str[i] != ' ')
        {
            if (str[i + 1] == ' ')
            {
                words++;
            }
        }
        i++;
    }

    arr = (char **)malloc(sizeof(char *) * (words + 1));

    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed for arr.\n");
        exit(1);
    }

    i = 0;
    words = 0;

    while (k < length)
    {
        if (str[k] != ' ')
        {
            if (count == 0)
            {
                arr[words] = (char *)malloc(sizeof(char) * 10);
                if (arr[words] == NULL)
                {
                    fprintf(stderr, "Memory allocation failed for arr[%d].\n", words);
                    exit(1);
                }
            }

            arr[words][count] = str[k];
            count++;

            if (str[k + 1] == ' ' || str[k + 1] == '\0')
            {
                arr[words][count] = '\0'; 
                words++;
                count = 0;
            }
        }

        k++;
    }

    arr[words] = NULL;

    return arr;
}
