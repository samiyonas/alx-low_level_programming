#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - length of linked list
 * @h: linked list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
