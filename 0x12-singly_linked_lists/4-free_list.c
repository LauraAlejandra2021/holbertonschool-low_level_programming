#include "lists.h"
/**
* free_list - free up memory space
* @head: principal node
* return: addres new node
*/
void free_list(list_t *head)
{
while (head)
{
    free(head->str);
    free(head);
    head = head->next;
}
}
