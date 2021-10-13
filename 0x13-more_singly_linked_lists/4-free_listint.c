#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a linked list
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	if (head ==NULL)
		return;

	while (head != NULL)
	{
		free(head);
	head = head->next;
	}
}
