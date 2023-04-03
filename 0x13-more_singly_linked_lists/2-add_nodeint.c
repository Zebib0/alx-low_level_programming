#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnode = malloc(sizeof(listint_t));

	if (!addnode)
		return (NULL);
	addnode->n = n;
	addnode->next = *head;
	*head = addnode;

	if (*head == NULL)
		*head = addnode;
return (*head);
}
