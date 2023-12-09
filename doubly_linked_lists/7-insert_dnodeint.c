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
	dlistint_t *tmp = *h, *newnode = malloc(sizeof(dlistint_t));


	if (*h == NULL || idx == 0)
		return (add_dnodeint(*h, n))
	if (newnode)
	{
		newnode->n = n;

		while (tmp->next != NULL)
		{
			if (idx == index)
			{
				newnode->prev = tmp->prev, newnode->next = tmp;
				tmp = tmp->prev, tmp->next = newnode;
				return (newnode); }
			index++, tmp = tmp->next; }
	}
	return (NULL);
}
