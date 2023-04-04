#include "lists.h"
#include<stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or if the list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *deletenode;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	deletenode = (*head)->next;
	free(*head);
	*head = deletenode;
	return (n);
}
