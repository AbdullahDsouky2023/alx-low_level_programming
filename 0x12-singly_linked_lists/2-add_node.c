#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node  - singly linked list
 * Return:0
 * @head: points to the next node
 * @str: points to the next node
 * Description: singly linked list node structure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node ->str=strdup(str);
	new_node ->len=strlen(str);
	new_node ->next=*head;
	*head =new_node;
	return (new_node);
}
