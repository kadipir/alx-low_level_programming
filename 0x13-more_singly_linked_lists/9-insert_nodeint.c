#include "lists.h"
/**
 * insert_nodeint_at_index - entry point
 * @idx: index where node is added
 * @head: first node pointer
 * @n: input
 * Return: pointer to new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0 ; i < idx ; i++)
{
if (i == (idx - 1))
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
{
temp = temp->next;
}
}
return (NULL);
}
