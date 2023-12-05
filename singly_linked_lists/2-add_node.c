#include "lists.h"

/**
 * add_node - add a new node to the list
 * @head: head pointer
 * @str: data of node
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		free(temp->str);
		free(temp->len);
		free(temp->next);
		free(temp);
		return (NULL);
	}
	temp->next = *head;
	temp->len = strlen(str);
	temp->str = strdup(str);
	if (!temp->str)
	{
		free(temp->str);
		free(temp->len);
		free(temp->next);
		free(temp);
		return (NULL);
	}
	*head = &temp;
	return (*head);
}
