#include "lists.h"
#include<stdlib.h>
/**
 * free_listint2 - frees a linked list
 * @head: listint_t list to be freed
 * Return: no return value
 */
void free_listint2(listint_t **head)
{
	listint_t *freenode;

	if (head == NULL)
		return;
	while (*head)
	{
		freenode = (*head)->next;
		free(*head);
		*head = freenode;
	}
	*head = NULL;
}
