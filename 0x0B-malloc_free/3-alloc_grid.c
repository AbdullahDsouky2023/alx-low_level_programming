#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid- prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
    int **arr = (int **)malloc(height * sizeof(int *));
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed for rows.\n");
        exit(1);
    }

    for (int i = 0; i < height; i++)
    {
        arr[i] = (int *)malloc(width * sizeof(int));
        if (arr[i] == NULL)
        {
            fprintf(stderr, "Memory allocation failed for columns.\n");
            exit(1);
        }
    }

    return arr;
    
}
