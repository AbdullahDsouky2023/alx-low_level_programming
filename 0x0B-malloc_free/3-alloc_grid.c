#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **grid_to_free = NULL;
/**
 * free_array - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_array(int **grid)
{
if (grid_to_free != NULL)
    {
        int i = 0;
        while (grid[i] != NULL)
        {
            free(grid[i]);
            i++;
        }
        free(grid);
    }
}

/**
 * free_array_wrapper - prints a grid of integers
 * Return: Nothing.
 */
void free_array_wrapper(void)
{
    if (grid_to_free != NULL)
    {
        free_array(grid_to_free);
    }
}
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **arr = (int **)malloc(height * sizeof(int *));
	int i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		fprintf(stderr, "Memory allocation failed for rows.\n");
		exit(1);
	}
	while (i < height)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			fprintf(stderr, "Memory allocation failed for columns.\n");
			exit(1);
		}
		i++;
	}
	grid_to_free = arr;
	atexit(free_array_wrapper);
	return (arr);
}
