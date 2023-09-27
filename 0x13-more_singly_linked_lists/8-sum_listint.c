#include "lists.h"
/**
 * insert_nodeint_at_index - entry point
 * @head: first node pointer 
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head;
unsigned sum = 0;

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
