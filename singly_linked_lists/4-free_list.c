#include "lists.h"

/**
 * free_list - frees linked list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
