#include "lists.h"
#include <string.h>
/**
 * add_node_end - returns the number of characters in the string
 * @head: principal node
 * @str: string
 * Return: number  of the elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tail;
list_t *n;
char *cop;
if (str == NULL)
{
return (NULL);
}
cop = strdup(str);
if (cop == NULL)
{
return (NULL);
}
tail = malloc(sizeof(list_t));
if (tail == NULL)
{
return (NULL);
}
tail->str = cop;
tail->len = strlen(str);
tail->next = NULL;
if (*head == NULL)
{
*head = tail;
return (*head);
}
for (n = *head; n->next != NULL;)
{
n = n->next;
}
n->next = tail;
return (*head);
}
