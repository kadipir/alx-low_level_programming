#include "lists.h"
/**
 * listint_len - entry point
 * @h: pointer to list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t index = 0;

while (h)
{
index++;
h = h->next;
}
return (index);
}
