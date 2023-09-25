#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - entry point
 * @head:input
 * @str: pointer to string to be added
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *list;
unsigned int len;

while (str[len])
{
len++;
}
list = malloc(sizeof(list_t));
if (!list)
{
return (NULL);
}
list->str = strdup(str);
list->len = len;
list->next = *head;
*head = list;
return (*head);
}

