#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: data for the new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int index = 0;
    dlistint_t *tmp = *h, *newnode = malloc(sizeof(dlistint_t));

    if (!newnode)
        return NULL;

    newnode->n = n;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (!*h && idx == 0)
    {
        *h = newnode;
        return newnode;
    }

    while (tmp != NULL && index < idx)
    {
        tmp = tmp->next;
        index++;
    }

    if (idx == 0)
    {
        newnode->next = *h;
        if (*h)
            (*h)->prev = newnode;
        *h = newnode;
        return newnode;
    }
    else if (tmp != NULL)
    {
        newnode->prev = tmp->prev;
        newnode->next = tmp;
        if (tmp->prev)
            tmp->prev->next = newnode;
        tmp->prev = newnode;
        return newnode;
    }
    else if (index == idx)
    {
        newnode->prev = tmp;
        if (tmp)
            tmp->next = newnode;
        return newnode;
    }

    free(newnode);
    return NULL;
}
