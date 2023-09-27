#include "lists.h"
/**
 * pop_listint - entry point
 * @head: pointer to first node
 * Return: data that was popped
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
unsigned int index;

if (!head || !*head)
{
return (0);
}
index = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (index);
}
