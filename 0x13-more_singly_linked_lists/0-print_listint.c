#include "lists.h"

size_t print_listint(const listint_t *h)
{
	while(h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
	}
	printf("\n");
	return(h->n);
}
