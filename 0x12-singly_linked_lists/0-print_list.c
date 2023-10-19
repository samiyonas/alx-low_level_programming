#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints of the elements of struct
 * @h: a pointer to struct data type
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int node_counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u} %s\n", h->len, h->str);
		}
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
