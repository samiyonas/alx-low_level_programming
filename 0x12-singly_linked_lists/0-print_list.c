#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints of the elements of struct
 * @h: a pointer to struct data type
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	unsigned int node_counter = 0;

	current = h;
	while (current)
	{
		if (current->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u} %s\n", current->len, current->str);
		}
		node_counter++;
		current = current->next;
	}
	return (node_counter);
}
