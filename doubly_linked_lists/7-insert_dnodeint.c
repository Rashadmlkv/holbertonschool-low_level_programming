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

	if ((tmp && newnode) && *h != NULL)
	{
		tmp = *h;
		newnode->n = n;

		while (tmp->next != NULL)
		{
			if (idx == 0)
			{
				newnode->prev = tmp->prev, newnode->next = tmp;
				return (newnode); }
		        else
			{
				newnode->prev = tmp->prev, newnode->next = tmp;
				tmp = tmp->prev, tmp->next = newnode;
				return (newnode); }
			index++, tmp = tmp->next; }
	}
	else if (*h == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	return (NULL);
}
