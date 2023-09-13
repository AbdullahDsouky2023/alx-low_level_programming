#include <stdio.h>
/**
 * array_iterator - prints an integer
 * @array: the array to do the action on 
 * @size:size of the array
 * @action: action to be done on each element 
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
