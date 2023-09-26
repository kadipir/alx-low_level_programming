#include "lists.h"
#include <stdio.h>

/**
 * _listint - entry point
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t index = 0;
while (h)
{
printf("%d\n", h->n);
index++;
h = h->next;
}
return (index);
}
