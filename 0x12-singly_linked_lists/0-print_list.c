#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - Prints all the elements of a list
 * @h: pointer to linked list
 * return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t num;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	{
	for (num = 0; h; num++)
	{
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	}
	return (num);
	}
}
