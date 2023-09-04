#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
    int **arr=(int **) malloc(sizeof(int ) * height);
    int i =0;
    while ( i < height) {
        arr[i] = (int*)malloc(width * sizeof(int));
        if (arr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed for columns.\n");
            exit(1);
        }
        i++;
    }
    return arr;
    
}
