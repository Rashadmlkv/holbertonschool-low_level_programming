#include "lists.h"

/**
 * add_node_end - add a new node to the list
 * @head: head pointer
 * @str: data of node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode)
	{
		newnode->n = n;

		if (*head == NULL)
		{
			*head = newnode; }
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = newnode;
			newnode->prev = tmp, newnode->next = NULL; }

		return (newnode);
	}
	return (NULL);
}
