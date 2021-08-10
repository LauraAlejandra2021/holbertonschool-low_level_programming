#include "lists.h"
/**
* listint_t - principal function
* @head: principal node
* @n: ni
* Return: addres new node.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = (listint_t*)malloc(sizeof(listint_t));

    listint_t *ult = *head;

if (new = NULL)
{
return (NULL);
}
if (*head == NULL)
{
    *head = new;
    return (new)
}
while (ult->next != NULL)
{
    ult = ult->next;
}
ult->next = new;
return(ult->next);
}
