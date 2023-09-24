#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len  - singly linked list
 * @h: points to the next node
 * Return:0
 * Description: singly linked list node structure
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
