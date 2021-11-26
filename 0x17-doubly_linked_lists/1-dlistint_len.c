#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node += 1;
	}
	return (node);
}
