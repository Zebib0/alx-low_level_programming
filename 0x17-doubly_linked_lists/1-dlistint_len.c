#include"lists.h"
/**
 * dlistint_len - number of element found in the linked list
 * @h: list
 * Return: number of element or length
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (i);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
