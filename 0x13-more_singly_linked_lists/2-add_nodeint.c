#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of singly linked list
 * @head: head of singly linked list
 * @n: integer
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
