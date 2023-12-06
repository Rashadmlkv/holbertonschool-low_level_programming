#include "lists.h"

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head->next;
	while (tmp != NULL)
	{
		free(head);
		head = tmp;
	}
}
