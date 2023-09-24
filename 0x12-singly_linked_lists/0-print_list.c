#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list  - singly linked list
 * @h: points to the next node
 * Return:0
 * Description: singly linked list node structure
 */


size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		num++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num);
}
