#include "lists.h"
/**
 * dlitint_len - counts the number of elements in a doubly linked list
 * @h: pointer to head of the list
 * Return: returns the number of elements
 */
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
