#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int get_words_length(char *str)
{
    int i =0;
    int words = 1;
     while (i < strlen(str))
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
    return words;
}
int *get_word_length(char *str)
{
    int i = 0;
    int words = 0;
    int k =0;
    int *counts=(int *)malloc (sizeof(int) * words);

    while (k < strlen(str))
    {
        if (str[k] != ' ')
        {
            counts[words]+=1;
            if (str[k + 1] == ' ' || str[k + 1] == '\0')
            {
                words++;
            }
        }
        k++;
    }
    return counts;
}
char **seperate_sting(char *str,int wordsCount,int *counts)
{
    int i=0;
    int k =0;
    int words = 0;
    int count = 0;
    
    char **arr = (char **)malloc(sizeof(char *) * (wordsCount + 1));

    while (k < strlen(str))
    {
        if (str[k] != ' ')
        {
            if (count == 0)
            {
                // Allocate memory for each word
                arr[words] = (char *)malloc(sizeof(char) * counts[words]);
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
                arr[words][count] = '\0'; // Null-terminate the word
                words++;
                count = 0;
            }
        }

        k++;
    }
    return arr;
}
char **strtow(char *str)
{

    int count = 0;
    int words = 0;
    int length =strlen(str);
    char **arr;
    int *counts;
    if (length == 1 || length == 0)
    {
        return NULL;
    }
    words=get_words_length(str);
    counts = get_word_length(str);
    arr=seperate_sting(str,words,counts);
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed for arr.\n");
        exit(1);
    }
    arr[words] = NULL;

    return arr;
}
