#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print elements of dlistint_t
 * @h: Doubly linked list
 * 
 * Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    if (h == NULL)
    {
        return (count);
    }
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return (count);
}