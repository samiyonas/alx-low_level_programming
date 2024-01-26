#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete at index
 * @head: linked list
 * @index: index
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unisgned int i = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	if (index == 0)
	{
		if (temp->next == NULL)
		{
			*head == NULL;
			free(temp);
			return (1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				return (1);
			}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (0);
}
