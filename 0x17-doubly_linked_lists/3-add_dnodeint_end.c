#include"lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the
 * end of the doubly linked list
 * @head: the doubly linked list
 * @n: the item to be added
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	last = *head;
	if ((last) != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = last;
	return (new);
}
