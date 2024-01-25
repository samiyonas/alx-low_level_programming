#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: linked list
 * @idx: index to be inserted at
 * @n: data
 *
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	while (i <= idx && temp != NULL)
	{
		if (i == idx)
		{
			new->n = n;
			new->next = temp;
			temp->prev->next = new;
			new->prev = temp->prev;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
