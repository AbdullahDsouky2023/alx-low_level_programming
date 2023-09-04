#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - prints buffer in hexa
 * @c: the char to print
 * @size: the size of the memory to print
 *
 * Return: pointer to arr .
 */
char *create_array(unsigned int size, char c){
    char *arr = (char *) malloc(sizeof(char) * size);
    int i;
    if(size == 0 || arr == NULL)
    {
        return NULL;
    }
    i = 0;
    while( i <size){
    arr[i++]=c;
 
    }
    return arr;
}
