#include"lists.h"
/**
 * sum_dlistint - a function which adds all the data in
 * the doubly linked list
 * @head: the doubly linked list
 * Return: if the list is empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	if (head != NULL)
	{
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	}
	return (sum);
}
