#include "lists.h"
#include<stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to the first element in the list
 * @n: data to be inserted in the linked list
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnode = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!addnode)
		return (NULL);
	addnode->n = n;
	addnode->next = NULL;
	if (*head == NULL)
	{
		*head = addnode;
		return (addnode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = addnode;
	return (addnode);
}
