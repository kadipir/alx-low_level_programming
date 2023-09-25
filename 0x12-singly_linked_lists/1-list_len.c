#include <stdlib.h>
#include "lists.h"
/**
 * list_len - entry point
 * @h: pointer to list
 * Return: count to list;
 */
size_t list_len(const list_t *h)
{
size_t index = 0;

while (h)
{
index++;
h = h->next;
}
return (index);
}
