#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - entry point
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t index = 0;

while (h)
if (h->str != NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u], %s", h->len, h->str);
h = h->next;
index++;
}
return (index);
}
