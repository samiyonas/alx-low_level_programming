#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in SLL
 * @h: singly linked list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
