#include "lists.h"


/**
 * add_nodeint - adds new node beginning of linked list
 *
 * @head: Pointer to first node in the list
 *
 * @n: Data to insert in new node
 *
 * Return: Pointer to new node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)

		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
