#include"lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes
 * the node at a given index
 * @head: linked list
 * @index: the index of the item to be deleted
 * Return: 1 if succedded and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *del;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	del = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(del);
		return (1);
	}
	while (index > 1 && del != NULL && del->next != NULL)
	{
		del = del->next;
		index--;
	}
	if (del->next == NULL)
		return (-1);
	temp = del->next;
	del->next = temp->next ? temp->next : NULL;
	if (temp->next != NULL)
		temp->next->prev = del;
	free(temp);
	return (1);
}
