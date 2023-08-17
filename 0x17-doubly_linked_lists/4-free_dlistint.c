#include"lists.h"
/**
 * free_dlistint - a function that frees a dlistint list
 * @head: list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		while ((temp = head) != NULL)
		{
			head = head->next;
			free(temp);
		}
	}
	else
	{
		while (head->prev != NULL)
			head = head->prev;
	}
}
