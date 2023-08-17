#include"lists.h"
/**
 * add_dnodeint - a function which adds new node
 * to the beginning of the doubly linked list.
 * @head: linked list
 * @n: constant int
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (new);
}
