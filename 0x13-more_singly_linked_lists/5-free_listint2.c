#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - frees a listint_t list
*@head: double pointer
*/
void free_listint2(listint_t **head)
{
listint_t *freenode;
listint_t *freenodeV2;
while (*head != NULL)
{
freenode = *head;
freenodeV2 = freenode;
while (freenode != NULL)
{
freenode = freenode->next;
free(freenodeV2);
}
*head = NULL;
}
}
