#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: linked list
 * @index: index
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unisnged int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (i <= index && temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
}
