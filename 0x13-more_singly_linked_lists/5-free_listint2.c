#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - frees a listint_t list
*@head: double pointer
*/
void free_listint2(listint_t **head)
{
listint_t *freenodeV2;
if (*head == NULL)
return;
while (*head != NULL)
{
freenodeV2 = (*head)->next;
free(*head);
*head = freenodeV2;
}
*head = NULL;
}
