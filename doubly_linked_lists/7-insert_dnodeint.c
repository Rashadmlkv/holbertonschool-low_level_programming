#include "lists.h"
/**
 * insert_dnodeint_at_index - creates new node in a given index
 * @h: first node
 * @idx: index of number
 * @n: data
 * Return: adress of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *tmp = malloc(sizeof(dlistint_t)),
		*newnode = malloc(sizeof(dlistint_t));

	if (tmp)
	{
		tmp = *h;
		newnode->n = n;

		while (tmp->next != NULL)
		{
			if (index == idx)
			{
				newnode->prev = tmp;
				newnode->next = tmp->next;
				tmp->next = newnode;
				tmp = newnode->next, tmp->prev = newnode;
				return (newnode); }
			index++, tmp = tmp->next; }
	}
	return (NULL);
}
