#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}

	free(head);
}
