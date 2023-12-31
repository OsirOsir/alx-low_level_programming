#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Realease memory allocated for a linked list
 * @head: list_t list t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
