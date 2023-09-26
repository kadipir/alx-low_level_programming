#include "lists.h"
/**
 * add_nodeint - entry point
 * @head: double pointer to the first node
 * @n: input
 * return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
lisintt_t *new;

new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head - new;
return (new);
}
