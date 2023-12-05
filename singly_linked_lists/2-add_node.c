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
		return (NULL);
	temp->next = *head;
	temp->str = strdup(str);
	if (!temp->str)
		return (NULL);
	temp->len = strlen(str);
	head = &temp;
	return (*head);
}
